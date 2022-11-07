#include <stdio.h>

int main()
{
    int nb, i, c = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &nb);
    
    for(i = 1; i <= nb; i++) {
        if (nb % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
        printf("This a number is Prime\n");
    else
        printf("This number is not a prime\n");
    return (0);
}
