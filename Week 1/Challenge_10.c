#include <stdio.h>
#define pi 3.1415

int main()
{
    int r;
    float result;
    printf("Give me the radius of the circle: ");
    scanf("%d", &r);

    result = 2*pi*r;
    printf("\n\n-------- The formula -->  2πr  --------\n\n");
    printf("circumference of a circle: %.3f\n", result);
}
