#include <stdio.h>

int main()
{
	int sum;
	int i;

	i = 0;
	sum = 0;
	while (i < 1024)
	{
		if (i % 3 == 0)
		{
			sum += i;
			i++;
		}
		else if (i % 5 == 0)
		{
			sum += i;
			i++;
		}
		else
			i++;
	}
	printf("%d\n", sum);
	return 0;
}