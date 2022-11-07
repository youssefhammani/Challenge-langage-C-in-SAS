#include <stdio.h>

int main() 
{
  int nb, i = 0;
  
  printf("Enter an integer: ");
  scanf("%d", &nb);

  printf("\n\t  --------Result--------\n\n");

  while (++i <= 10)
  {
    printf("\t\t%d * %d = %d\n", nb, i, nb * i);
  }
  
  return 0;
}
