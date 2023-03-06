#include "main.h"
#include <stdio.h>

void print_diagsums(int *a, int size)
{
	int i;
	int sum_1;
	int sum_2;
	
	i = 0;
	sum_1 = 0;
	sum_2 = 0;

	while (i < size)
	{
		sum_1 += a[i];
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		sum_2 += a[i];
		i++;
	}
	printf("%d, %d\n",sum_1, sum_2);
}

int main(void)
{
    int c3[3][3] = {
        {0, 1, 5},
        {10, 11, 12},
        {1000, 101, 102},
    };
    int c5[5][5] = {
        {0, 1, 5, 12124, 1234},
        {10, 11, 12, 123521, 12512},
        {1000, 101, 102, 12545, 214543435},
        {100, 1012451, 11102, 12545, 214543435},
        {10, 12401, 10452, 11542545, 1214543435},
    };
    print_diagsums((int *)c3, 3);
    print_diagsums((int *)c5, 5);
    return (0);
}