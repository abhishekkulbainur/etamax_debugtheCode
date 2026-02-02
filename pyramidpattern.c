#include <stdio.h>
// code for pyramid pattern.
int main() {
   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   // In this for loop instead of k=0 there is i++
   for (i = 1; i <= rows; ++i, i++) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      // messed with the codition in the while loop. The condition is k!=2*i-1
      while (k != 2 * space) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}
