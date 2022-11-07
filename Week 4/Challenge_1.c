#include <stdio.h>

int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int nb_1, nb_2;

    printf("Enter the first number: ");
    scanf("%d", &nb_1);
    printf("Enter the second number: ");
    scanf("%d", &nb_2);

    int result = add(nb_1, nb_2);
    printf("Result = %d\n", result);
    return 0;
}
