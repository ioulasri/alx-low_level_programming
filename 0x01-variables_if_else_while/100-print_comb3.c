#include <stdio.h>

/* main - print numbers
   Description: printing all combinations from 01 to 89
   Return value: Always 0 (Success)
*/
int main(void)
{
   int i;
   int j;

   i = 0;
   while (i <= 8)
   {
      j = 1;
      while (j <= 9)
      {
         putchar(i + 48);
         putchar(j + 48);
         if (i < 8 || j < 9)
         {
            putchar(',');
            putchar(' ');
         }
         j++;
      }
      i++;
   }
   putchar('\n');
   return (0);
}
