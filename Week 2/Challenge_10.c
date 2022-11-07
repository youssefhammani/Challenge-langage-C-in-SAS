#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_nbr(int range)
{
    int nbr;

    nbr = rand() % range;
    return (nbr);
}

int main()
{
    int i;
    char str[10][16]= {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};


    // seed random number generator
    srand(time(NULL));

    i = random_nbr(7);
    printf("Today is: %s\n", str[i]);
}
