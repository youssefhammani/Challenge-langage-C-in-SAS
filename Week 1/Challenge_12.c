#include <stdio.h>

void    swap_nbrs(int a,int b, int c)
{
	int tmp;

	tmp = a;
	a = b;
	b = c;
	c = tmp;
	tmp = a;
	a = b;
	b = tmp;

    printf("\n\t------------Result------------\n");
	printf("result = %d%d%d \n", a, b, c);
}

int main ()

{
	int a,b,c;

    printf("Enter the first number: ");
	scanf("%d", &a);
    printf("Enter the second number: ");
	scanf("%d", &b);
    printf("Enter the third number: ");
	scanf("%d", &c);

    printf("The number you entered is: %d%d%d\n", a, b, c);
	swap_nbrs(a,b,c);
}
