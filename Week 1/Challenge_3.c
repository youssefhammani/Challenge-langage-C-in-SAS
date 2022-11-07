#include <stdio.h>

int main()
{
    float Mile;

    printf("-------- Convert Mile to Km --------\n\n");
    printf("Enter the distance in mile: ");
    scanf("%f", &Mile);

    printf("\n\n\t -------- Result by Km --------\n\n");
    printf("\tThe distance in km is: %f\n", (Mile * 1.609));


}
