#include "main.h"
#include <stdio.h>

/**
 * leet - converts specific characters to 4-3-0-7-1
 * @s: the string to iterate through
 * Return: return the converted string
 **/

char *leet(char *s)
{
	int i;
	int j;
	char leet[11] = "aAeEoOtTlL";
	int convert[5] = {4, 3, 0, 7, 1};

	j = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (leet[j])
		{
			if (s[i] == leet[j])
			{
				s[i] = convert[j / 2] + 48;
			}
			j++;
		}
		i++;
	}
	return (s);
}

int main(void)
{
    char s[] = "Expect the besT. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.");
    return (0);
}