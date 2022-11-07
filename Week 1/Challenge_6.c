#include <stdio.h>

int main()
{
    float Fhrnit;
    float result;

    printf("-------- Conversion from Fahrenheit to Celsius --------\n\n");
    printf("Enter the temperature in Fahrenheit: ");
    scanf("%f", &Fhrnit);

    result = (Fhrnit - 32) * 5 / 9;

    printf("\n\n\t\t-------- Result by Celsius --------\n\n");
    printf("\tThe temperature in degrees Celsius is: %f\n", result);
    
    return (0);

}
