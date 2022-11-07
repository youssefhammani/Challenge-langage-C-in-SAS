#include <stdio.h>

int check_alpht(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return 0;
    return 1;
}

int main()
{
    char    c;

    printf("\tThis program checks the input if it is alphabitic or not\n");
    printf("Enter the Character: ");
    scanf("%c", &c);

    if (!check_alpht(c))
    {
        printf("\n\t---------Result--------\n");
        if (c >= 65 && c <= 90)
            printf("\nThis letter is uppercase: %c\n", c);
        else
            printf("\nThis letter is lowercase: %c\n", c);
    }
    else
        printf("\nThis Character is not an alphabet:--> %c\n", c);
}
