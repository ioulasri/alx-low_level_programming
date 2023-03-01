#include "main.h"

/**
 * cap_string - Captilizes the string given as parameter
 * @s: the string
 * Return: the captilized string
 **/

char *cap_string(char *s)
{
    char *first;
    char *second;
    int i = 0;
    char str[14] = {',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', '\t', '\n', ' '};

    first = s;
    second = s;
    second++;
    while (*second != 0)
    {
        while (*(str + i) != 0)
        {
            if (*first == *(str + i))
            {
                if (*second >= 'a' && *second <= 'z')
                    *second -= 32;
                i = 0;
                break;
            }
            i++;
        }
        i = 0;
        first++;
        second++;
    }
    return (s);
}
