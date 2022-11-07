#include <stdio.h>

void    print_result(int new_nbr_1, int new_nbr_2, int nbr_2, int nbr_1)
{
    printf("\n\t---------- The result after swap ----------\n\n");
    printf("The first number %d became: = %d\n", nbr_1, new_nbr_1);
    printf("The second figure %d became: = %d\n", nbr_2, new_nbr_2);
}

void swap_nbrs(int nbr_1, int nbr_2)
{
    int swap;

    if (nbr_1 != nbr_2)
    {
        swap = nbr_1;
        nbr_1 = nbr_2;
        nbr_2 = swap;

        print_result(nbr_1, nbr_2, nbr_1, nbr_2);
    }
    else
    {
        printf("\nThese numbers are equal: %d = %d\n", nbr_1, nbr_2);
    }
    return ;
}

int main()
{
    int nb_1, nb_2;
    printf("Enter The first number: ");
    scanf("%d", &nb_1);
    printf("Enter The second number: ");
    scanf("%d", &nb_2);

    swap_nbrs(nb_1, nb_2);
}
