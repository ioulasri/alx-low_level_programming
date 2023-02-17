#include <stdio.h>

/* main - print numbers
   Description: printing all combinations from 0 to 9
   Return value: Always 0 (Success)
*/
int main(void)
{
   int i;

   i = 48;
   while (i < 58)
   {
      putchar(i);
      if (i < 57)
      {
         putchar(',');
         putchar(' ');
      }
      i++;
   }
   putchar('\n');
   return (0);
}
