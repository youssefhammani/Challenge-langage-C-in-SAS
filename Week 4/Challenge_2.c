#include <stdio.h>

int a, b;

void    swap()
{
    a = a + b;
    b = a - b;
    a = a - b; 
}

int main()
{
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);

    swap();
    printf("Result is (a) = %d\nResult is (b) = %d\n", a, b);
}