#include <stdio.h>

int fibonacci(int n)
{
    int result;

    if (n < 0)
        return (n);
    if (n == 0 || n == 1)
        return (n);
    else
        result = fibonacci(n - 1) + fibonacci(n - 2);
    return (result);
}

int main()
{
    int nb, result;

    printf("Entet the number: ");
    scanf("%d", &nb);

    result = fibonacci(nb);
    if (result < 0)
        printf("Syantax error\n");
    else
        printf("%d\n", result);

    return (0);
}