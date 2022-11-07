#include <stdio.h>

int main()
{
    char nbr[50];
    int len = 0;

    printf("Enter the number: ");
    scanf("%s", nbr);

    while (nbr[len])
        len++;
    while (len--)
        printf("%c", nbr[len]);
    return (0);
}
