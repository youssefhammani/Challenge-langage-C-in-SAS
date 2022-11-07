#include <stdio.h>
#include <unistd.h>

int main()
{
    int nbr, pwr, result, stock;

    printf("Enter the first number: ");
    scanf("%d", &nbr);
    printf("Enter the second number: ");
    scanf("%d", &pwr);

    stock = nbr;
    
    if (nbr == 0)
    {
        write(1, "0\n", 2);
    }
    else if (nbr > 0 && pwr >= 0)
        {
            if (pwr == 0)
            {
                write(1, "1\n", 2);
            }
            else
            {
                while (pwr > 1)
                {
                    nbr = nbr * stock;
                    pwr = pwr - 1;
                }
                printf("Result = %d\n", nbr);
            }
        }
    return (0);
}
