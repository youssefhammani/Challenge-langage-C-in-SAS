#include <stdio.h>

int main() {
   int i, rows, space, star = 0;

   printf("Enter the number of rows: ");
   scanf("%d", &rows);

   for (i = 1; i <= rows; i++, star = 0) {
      for (space = 1; space <= rows - i; space++) {
         printf("  ");
      }
      while (star != 2 * i - 1) {
         printf("* ");
         star++;
      }
      printf("\n");
   }
   return 0;
}
