#include <stdio.h>

int main()
{
    float F;
    float result;

    printf("-------- Conversion from °F to °C --------\n\n");
    printf("Enter the temperature in Fahrenheit--> °F: ");
    scanf("%f", &F);

    result = (F - 32) * 5 / 9;

    printf("\n\n\t\t-------- Result by °C --------\n\n");

    if (result < 0)
    {
        printf("\tThe temperature in degrees Celsius is: %f\n", result);
        printf("\n\t\t  The weather today is Freezing\n");
    }
    else if (result > 0 && result < 10)
    {
        printf("\tThe temperature in degrees Celsius is: %f\n", result);
        printf("\n\t\t  The weather today is very cold\n");
    }
    else if (result >= 10 && result < 20)
    {
        printf("\tThe temperature in degrees Celsius is: %f\n", result);
        printf("\n\t\t  The weather today is cold\n");
    }
    else if (result >= 20 && result < 30)
    {
        printf("\tThe temperature in degrees Celsius is: %f\n", result);
        printf("\n\t\t  The weather today is normal in temp\n");
    }
    else if (result >= 30 && result < 40)
    {
        printf("\tThe temperature in degrees Celsius is: %f\n", result);
        printf("\n\t\t  The weather today is its hot\n");
    }
    else if (result >= 40)
    {
        printf("\tThe temperature in degrees Celsius is: %f\n", result);
        printf("\n\t\t  The weather today is very hot\n");
    }
    return (0);

}
