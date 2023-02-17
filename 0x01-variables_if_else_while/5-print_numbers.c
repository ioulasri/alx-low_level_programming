#include <stdio.h>

/* main - print numbers
   Description: printing numbers from 0 to 9
   Return value: Always 0 (Success)
*/
int main(void)
{
   int i;

   i = 48;
   while (i < 58)
   {
      putchar(i);
      i++;
   }
   putchar('\n');
   return (0);
}
