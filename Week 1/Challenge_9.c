#include <stdio.h>
#include <math.h>

int main ()
{
    int x1,x2,y1,y2;
    int somme;

    printf("Enter (x1, y1) and (x2, y2):");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    printf("\n\n------ The formula -->  √((x2-x1)² + (y2-y1)²)  ------\n\n");
    somme = sqrt(pow(x2 - x1,2) + pow(y2 - y1, 2));
    printf("the distance between them: %d\n",somme);
}
