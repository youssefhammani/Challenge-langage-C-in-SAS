#include <stdio.h>
#include <stdbool.h>

void    print_result(bool condt, int nmbr_1, int nmbr_2, int result)
{
    printf("\nThis is the result of division %d / %d = %d\n", nmbr_1, nmbr_2, result);

    if (condt == true)
        printf("So this number is a prime number: --> %d\n", result);
    else
        printf("So this number is not a prime number: --> %d\n", result);
    return ;
}

bool    isPrime(int nbr)
{
    int i = 2;

    if (nbr > 1)
    {
        while (nbr % i != 0)
        {
            i++;
        }
        if (i == nbr)
            return true;
        return false;
    }
    else
        return (false);    
}

int divided(int nb_1, int nb_2)
{
    int result = nb_1 / nb_2;

    return (result);
}

int main()
{
    int n_1, n_2;

    printf("Enter the first number: ");
    scanf("%d", &n_1);
    
    printf("Enter the second number: ");
    scanf("%d", &n_2);

    if (n_2 == 0)
        printf("Division by zero is undefined\n");
    else
    {
        int temp = divided(n_1, n_2);
        bool stock = isPrime(temp);

        print_result(stock, n_1, n_2, temp);
    }
}
