#include <stdio.h>
#include <stdbool.h>

bool    isPrime(int nbr)
{
    int i = 2;

    while (nbr % i != 0)
    {
        i++;
    }
    if (i == nbr)
        return true;
    return false;
    
}

int main()
{
    int nb;

    printf("Enter a positive integer: ");
    scanf("%d", &nb);

    bool result = isPrime(nb);

    if (result == true)
        printf("This a number is Prime: %d\n", nb);
    else
        printf("This number is not a prime %d\n", nb);
    return (0);
}