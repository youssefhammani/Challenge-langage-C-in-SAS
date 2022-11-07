#include <stdio.h>

int main()
{
    float c;
    printf("-------- Conversion from °C to °F --------\n\n");
    printf("Enter the temperature in degrees Celsius--> °C: ");
    scanf("%f", &c);

    printf("\n\n\t\t-------- Result by °F --------\n\n");
    printf("\tThe temperature in Fahrenheit is: %f\n", (c * 9/5) + 32);


}
