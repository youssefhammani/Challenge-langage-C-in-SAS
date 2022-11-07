#include <stdio.h>

int main ()
{
    int a,b,c,Sum,Average;

    printf("Enter number a : ");
    scanf("%d",&a);
    printf("Enter number b : ");
    scanf("%d",&b);
    printf("Enter number c : ");
    scanf("%d",&c);
    Sum = (a + b + c);
    Average = Sum/3;

    printf("the total--> %d and Average is: %d\n", Sum, Average);
}
