#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* main - Entry point

   Description : 'check if given n is P or N'
   Return : Always 0 (Success)

 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative", n);
	else if (n == 0)
		printf("%d is zero", n);
	else:
		printf("%d is positive", n);
	return (0);
}