#include <stdio.h>

/* main - print alphabets
   Description: by only using write print alphabets in lowercase
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
   putchar('\n');
   return (0);
}
