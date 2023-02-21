#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: always 0 (Success)
 */

void times_table(void)
{
	int i;
	int mult;
	int a;

	i = 0;
	while (i <= 9)
	{
        mult = 0;
		while (mult <= 9)
		{
		    a = i * mult;
		    if (i * mult >= 10)
		    {
		        _putchar((a / 10) + 48);
		        _putchar((a % 10) + 48);
		        if (mult < 9 && (i * (mult + 1)) >= 10)
    			{
    			    _putchar(',');
    			    _putchar(' ');
    			}
    			if (mult < 9 && (i * (mult + 1)) < 10)
    			{
    			    _putchar(',');
    			    _putchar(' ');
    			    _putchar(' ');
    			}
		    }
		    else
		    {
		        _putchar(a + 48);
		        if (mult < 9 && (i * (mult + 1)) >= 10)
			    {
			    _putchar(',');
			    _putchar(' ');
			    }
			if (mult < 9 && (i * (mult + 1)) < 10)
			    {
			    _putchar(',');
			    _putchar(' ');
			    _putchar(' ');
			    }
		    }
		
			mult++;
		}
		mult = 0;
		i++;
		putchar('\n');
	}
}
