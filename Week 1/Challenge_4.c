#include <stdio.h>

int main()
{
    float Km;

    printf("-------- Convert Km to Mile --------\n\n");
    printf("Enter the distance in Km: ");
    scanf("%f", &Km);

    printf("\n\n\t -------- Result by Mile --------\n\n");
    printf("\tThe distance in mile is: %f\n", (Km / 1.609));


}