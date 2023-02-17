#include <stdio.h>

/* main - print numbers
   Description: printing numbers in hexadecimal values
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
   i = 'a';
   while (i < 'g')
   {
      putchar(i);
      i++;
   }
   putchar('\n');
   return (0);
}
