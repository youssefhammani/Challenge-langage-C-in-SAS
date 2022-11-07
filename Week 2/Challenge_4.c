#include <stdio.h>

void    check_nbrs(int nbr_1, int nbr_2)
{
    if (nbr_1 == nbr_2)
        printf("result: = %d\n", (nbr_1 + nbr_2) * 3);
    else
        printf("result: = %d\n", nbr_1 + nbr_2);
    return ;
}

int main()
{
    int nb_1, nb_2;

    printf("--------This program calculates integers--------\n");
    printf("Enter the first integer: ");
    scanf("%d", &nb_1);
    printf("Enter the second integer: ");
    scanf("%d", &nb_2);

    printf("\n\t--------The result of two digits of the integers--------\n");
    check_nbrs(nb_1, nb_2);
}
