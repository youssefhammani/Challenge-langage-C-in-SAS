#include <stdio.h>

int check_nbr_is_plndrm(int result, int stock)
{
    printf("\n\t------------result is------------\n\n");
    if (result == stock)
        printf("This the number is Palindrome: %d\n", result);
    else
        printf("This the number is not Palindrome: %d\n", result);
    return (0);
}

int rvrs_nbrs(int nbr)
{
    int result = 0;
    int stock = nbr;


    while (nbr != 0)
    {
        result  = result * 10 + nbr % 10;
        nbr = nbr / 10;
    }
    return (check_nbr_is_plndrm(result, stock));
}

int main()
{
    int nb;

    printf("\tThis program checks whether number Palindrome\n\n");
    printf("Enter The number: ");
    scanf("%d", &nb);

    rvrs_nbrs(nb);
}
