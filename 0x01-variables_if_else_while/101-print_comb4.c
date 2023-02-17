#include <stdio.h>

/* main - print numbers
   Description: printing all combinations from 012 to 789
   Return value: Always 0 (Success)
*/
int main(void)
{
   int i;
   int j;
   int k;

   i = 0;
   while (i <= 7)
   {
      j = 1;
      while (j <= 8)
      {
         k = 2;
         while (k <= 9)
         {
            putchar(i + 48);
            putchar(j + 48);
            putchar(k + 48);
            if (i < 7 || j < 8 || k < 9)
            {
               putchar(',');
               putchar(' ');
            }
            k++;
         }
         j++;
      }
      i++;
   }
   putchar('\n');
   return (0);
}
