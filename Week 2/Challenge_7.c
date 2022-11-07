#include <stdio.h>

int check_nbrs(float nb)
{
    printf("\n\t-------- Student Result --------\n");
    if (nb >= 0 && nb < 10)
    {
        printf("%.2f : (Recalled)\n", nb);
    }
    else if (nb >= 10 && nb < 12)
    {
        printf("%.2f : (Passable)\n", nb);
    }
    else if (nb >= 12 && nb < 14)
    {
        printf("%.2f : (Pretty Well)\n", nb);
    }
    else if (nb >= 14 && nb < 16)
    {
        printf("%.2f : (Good)\n", nb);
    }
    else if (nb >= 16)
    {
        printf("%.2f : (Very Well)\n", nb);
    }
    else
    {
        printf("Syntax error\n");
    }
    return (0);
}

int main()
{
    float nb;

    printf("\tWe're post the mention obtained by a student according to the average of his notes\n");
    printf("Enter The number: ");
    scanf("%f", &nb);

    check_nbrs(nb);
}
