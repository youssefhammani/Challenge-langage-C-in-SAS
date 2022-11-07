#include <stdio.h>
#include <math.h>

int pssbl_solutions(double a, double b, double c)
{
    double dilta, solution_1, solution_2;
    
    dilta = pow(b,2) - (4 * a * c);
    
    if (dilta > 0)
    {
        solution_1 = (-b + sqrt(dilta)) / (2 * a);
        solution_2 = (-b - sqrt(dilta)) / (2 * a);
        
        printf("Solution_1 = %.2lf\n", solution_1);
        printf("Solution_2 = %.2lf\n", solution_2);
    }
    else if (dilta == 0)
    {
        solution_1 = -b / (2 * a);
        printf("Solution_1 = %.2lf\n", solution_1);
    }
    else
    {
        printf("Equation does not have a solution because of %.2lf < 0\n", dilta);
    }
    return (0);
}

int main()
{
    double a, b, c;

    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a == 0 && b == 0 && c == 0)
        printf("Error a, b and c are real numbers and (a != 0)\n");
    else
        pssbl_solutions(a, b, c);
}
