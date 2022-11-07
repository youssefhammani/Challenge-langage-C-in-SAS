#include <stdio.h>

int main()
{
    int nb, result, a = 0, b = 1;

    printf("Entet the number: ");
    scanf("%d", &nb);

    printf("The result of the Fibonacci series is: ");
    for (int i = 1; i <= nb; i++) {
        printf("%d ", a);

        result = a + b;

        a = b;
        b = result;
    }
        printf("\n");
    return (0);
}
