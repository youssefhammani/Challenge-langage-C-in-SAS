#include <stdio.h>

int main()
{
    int nbr, prm, i;
    printf("Enter the value: ");
    scanf("%d", &nbr);

    for (prm = 2; prm <= nbr; prm++){
        i = 2;
        while (prm % i != 0)
            i++;
        if (i == prm)
            printf("%d\n", prm);
    }
    return (0);
}
