#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'prints various data types and their sizes'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	printf("%s%lu%s\n", "size of a char: ", sizeof(char), " byte(s)");
    printf("%s%lu%s\n", "size of an int: ", sizeof(int), " byte(s)");
    printf("%s%lu%s\n", "size of a long int: ", sizeof(long int), " byte(s)");
    printf("%s%lu%s\n", "size of a long long int: ", sizeof(long long int), " byte(s)");
	printf("%s%lu%s\n", "size of a float: ", sizeof(float), " byte(s)");
    return (0);
}
