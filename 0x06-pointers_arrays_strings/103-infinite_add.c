#include "main.h"

/**
 * reverse_string - reverses the order of characters in a string
 * @str: pointer to the string to be reversed
 * Return: void
 */
void reverse_string(char *str)
{
	int i = 0, j = 0;
	char temp;

	/* Find the length of the string */
	while (*(str + i) != '\0')
	{
		i++;
	}
	i--;

	/* Swap characters from start and end of string until halfway point */
	for (j = 0; j < i; j++, i--)
	{
		temp = *(str + j);
		*(str + j) = *(str + i);
		*(str + i) = temp;
	}
}

/**
 * infinite_add - adds two positive numbers together
 * and stores the result in a buffer
 * @num1: string representation of the first number to add
 * @num2: string representation of the second number to add
 * @result: pointer to a buffer to store the result
 * @result_size: size of the result buffer
 * Return: pointer to the result buffer, or 0 if result buffer is too small
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, i = 0, j = 0, num1_digit = 0, num2_digit = 0, temp_sum = 0;
	int num1_len = 0, num2_len = 0, result_len = 0;

	while (n1[num1_len])
		num1_len++;
	while (n2[num2_len])
		num2_len++;
	if (num1_len > size_r - 1 || num2_len > size_r - 1)
		return (0);
	/* Traverse n1 and n2 from right to left, adding digits and carry */
	while (j >= 0 || i >= 0 || carry == 1)
	{
		/* Get num1 and num2 or 0 if all numbers have been processed */
		if (i < 0)
			num1_digit = 0;
		else
			num1_digit = *(n1 + i) - '0';
		if (j < 0)
			num2_digit = 0;
		else
			num2_digit = *(n2 + j) - '0';
		/* Add the digits and carry, and set new carry if necessary */
		temp_sum = num1_digit + num2_digit + carry;
		if (temp_sum >= 10)
			carry = 1;
		else
			carry = 0;
		if (result_len >= size_r - 1)
			return (0);
		/* Add the sum digit to the result buffer */
		*(r + result_len) = (temp_sum % 10) + '0';
		result_len++;
		j--;
		i--;
	}
	*(r + result_len) = '\0';
	reverse_string(r);
	return (r);
}
