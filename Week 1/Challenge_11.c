#include <stdio.h>

int main()
{
    int length, width, result;
    printf("--------Give me the length and width of the rectangle--------\n");
    printf("Enter length: ");
    scanf("%d", &length);
    printf("Enter width: ");
    scanf("%d", &width);

    printf("\n\n-------- The formula for the circumference of a rectangle = 2*(length + width)  --------\n\n");
    printf("\t\tThe circumference of a rectangle is: %.3f\n", result = 2*(length + width));
}
