#include "main.h"

/**
 * reverse_array - reverse array
 * @n: integer params
 * @a: the array
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int swap;

	i = 0;
	j = n - 1;
	while (i < n / 2)
	{
		swap = a[i];
		a[i] = a[j];
		a[j] = swap;
		i++;
		j--;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, i = 0, j = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (n[i])
		i++;
	while (n2[i])
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || carry == 1)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = n1[i] - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = n2[i] - '0';
		temp_tot = val1 + val2 + carry;
		if (temp_tot >= 10)
			carry = 1;
		else
			carry = 0;
		if (digits >= (size_r - 1))
			return (0);
		r[digits] = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	r[digits] = '\0';
	rev_string(r);
	return (r);
}
