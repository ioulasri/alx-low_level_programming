#include <stdio.h>

/* main - print alphabets
   Description: by only using write print alphabets in lowercase
   except e and q
   Return value: Always 0 (Success)
*/
int main(void)
{
   int i;

   i = 97;
   while (i < 123)
   {
      if (i == 101 || i == 113)
         i++;
      putchar(i);
      i++;
   }
   putchar('\n');
   return (0);
}
