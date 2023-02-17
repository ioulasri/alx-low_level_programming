#include <stdio.h>

/* main - print numbers
   Description: printing all combinations from 00 01 to 99 98
   Return value: Always 0 (Success)
*/
int main(void)
{
   int i;
   int j;

   i = 0;
   while (i <= 99)
   {
      j = i + 1;
      while (j <= 99)
      {
         putchar(48 + i / 10);
         putchar(48 + i % 10);
         putchar(' ');
         putchar(48 + j / 10);
         putchar(48 + j % 10);
         if (i != 98 || j != 99)
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
