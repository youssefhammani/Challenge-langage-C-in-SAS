#include <stdio.h>

int main()
{
    int nbr;
    printf("Enter the number: ");
    scanf("%d", &nbr);

    printf("\n\t------------Result------------\n\n");
    printf("Equivalent value in Hexadecimal is: %x\n", nbr);
    printf("Equivalent value in Octal is: %o\n", nbr);

    return (0);
}
