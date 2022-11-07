#include <stdio.h>

int main()
{
    int nb, len = 1, sum = 0;
    
    printf("Enter ten numbers: ");

    do
    {
        scanf("%d", &nb);

        if (nb < 0)
            printf("Enter another number: ");
        else if (nb > 0)
        {
            sum += nb;
        }
    } while (len++ < 10);
        printf("sum = %d\n", sum);
    return 0;
}
