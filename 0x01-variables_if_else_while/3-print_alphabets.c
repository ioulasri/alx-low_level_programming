#include <stdio.h>

/* main - print alphabets
   Description: by only using write print alphabets in lowercase
   and uppercase
   Return value: Always 0 (Success)
*/
int main(void)
{
   int i;

   i = 97;
   while (i < 123)
   {
      putchar(i);
      i++;
   }
   i = 65;
   while (i < 91)
   {
      putchar(i);
      i++;
   }
   putchar('\n');
   return (0);
}
