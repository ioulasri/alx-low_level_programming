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

	// Find the length of the string
	while (*(str + i) != '\0')
	{
		i++;
	}
	i--;

	// Swap characters from start and end of string until halfway point
	for (j = 0; j < i; j++, i--)
	{
		temp = *(str + j);
		*(str + j) = *(str + i);
		*(str + i) = temp;
	}
}

/**
 * infinite_add - adds two positive numbers together and stores the result in a buffer
 * @num1: string representation of the first number to add
 * @num2: string representation of the second number to add
 * @result: pointer to a buffer to store the result
 * @result_size: size of the result buffer
 * Return: pointer to the result buffer, or 0 if result buffer is too small
 */
char *infinite_add(char *num1, char *num2, char *result, int result_size)
{
	int carry = 0, i = 0, j = 0, num1_digit = 0, num2_digit = 0, temp_sum = 0;
	int num1_len = 0, num2_len = 0, result_len = 0;

	// Find the lengths of the two input numbers
	while (*(num1 + num1_len) != '\0')
		num1_len++;
	while (*(num2 + num2_len) != '\0')
		num2_len++;

	// Check if result buffer is large enough to hold the sum
	if (num1_len > result_size - 1 || num2_len > result_size - 1)
		return (0);

	// Traverse both numbers from right to left, adding corresponding digits and carry
	while (j >= 0 || i >= 0 || carry == 1)
	{
		// Get the current digit from num1 and num2, or 0 if all digits have been processed
		if (i < 0)
			num1_digit = 0;
		else
			num1_digit = *(num1 + i) - '0';
		if (j < 0)
			num2_digit = 0;
		else
			num2_digit = *(num2 + j) - '0';

		// Add the digits and carry, and set new carry if necessary
		temp_sum = num1_digit + num2_digit + carry;
		if (temp_sum >= 10)
			carry = 1;
		else
			carry = 0;

		// Check if result buffer is large enough to hold next digit
		if (result_len >= result_size - 1)
			return (0);

		// Add the sum digit to the result buffer
		*(result + result_len) = (temp_sum % 10) + '0';
		result_len++;

		// Move to the next digit
		j--;
		i--;
	}

	// Add null terminator to the end of the result buffer
	*(result + result_len) = '\0';

	// Reverse the order of characters in the result buffer
	reverse_string(result);

	// Return a pointer to the result buffer
	return (result);
}
