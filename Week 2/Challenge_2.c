#include <stdio.h>

int main()
{
    int nb;

    printf("--------This program displays whether this number is even or odd--------\n");    
    printf("Enter a number: ");
    scanf("%d", &nb);

    printf("\n\t--------This is the result--------\n\n");
    if (nb % 2 == 0)
        printf("This number is even: %d\n", nb);
    else
        printf("This number is odd: %d\n", nb);
    return (0);
}
