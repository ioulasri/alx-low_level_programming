#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * _strncpy - copies the string pointed to by src
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';

    return (dest);
}

/**
 * strncmpr - compares two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to compare
 * Return: 0 if equal, 1 if not
 */

int strncmpr(char *s1, char *s2, int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (s1[i] != s2[i])
            return (1);
    }
    return (0);
}

/**
 * f4 - finds the biggest number
 *
 * @username: username
 * @size: length of username
 * Return: the biggest number
 */
int f4(char *username, int size)
{
    int ch;
    int vch;

    ch = vch = 0;

    while (vch < size)
    {
        if (username[vch] > ch)
            ch = username[vch];
        vch += 1;
    }

    srand(ch ^ 14);
    return (rand() & 63);
}

/**
 * f5 - multiplies each char of username
 *
 * @usrn: username
 * @len: length of username
 * Return: multiplied char
 */
int f5(char *usrn, int len)
{
    int ch;
    int vch;

    ch = vch = 0;

    while (vch < len)
    {
        ch = ch + usrn[vch] * usrn[vch];
        vch += 1;
    }

    return (((unsigned int)ch ^ 239) & 63);
}

/**
 * f6 - generates a random char
 *
 * @usrn: username
 * Return: a random char
 */
int f6(char *usrn)
{
    int ch;
    int vch;

    ch = vch = 0;
    while (vch < usrn[0])
    {
        ch = rand();
        vch++;
    }
    return (((unsigned int)ch ^ 229) & 63);
}

/**
 * main - Entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
    char username[7];
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int v9;

    if (argc != 2)
        return (-1);
    _strncpy(username, argv[1], 7);
    if (strncmpr("Aleph", username, 5) == 0)
    {
        srand(time(NULL));
        v4 = f4(username, 6);
        printf("%c", v4);
        v5 = f5(username, 6);
        printf("%c", v5);
        v6 = f6(username);
        printf("%c", v6);
        v7 = v4 ^ v5;
        v7 = v7 ^ v6;
        v7 = (((unsigned int)v7 ^ 0x55) & 63);
        printf("%c", v7);
        v8 = (v4 ^ 0x4F) & 63;
        printf("%c", v8);
        v9 = v4 * v5;
        v9 = ((unsigned int)v9 ^ 0xEFBE) & 63;
        printf("%c\n", v9);
    }
    else
    {
        srand(time(NULL));
        v4 = f4(username, 6);
        printf("%c", v4);
        v5 = f5(username, 6);
        printf("%c", v5);
        v6 = f6(username);
        printf("%c", v6);
        v7 = v4 ^ v5;
        v7 = v7 ^ v6;
        v7 = (((unsigned int)v7 ^ 0x55) & 63);
        printf("%c", v7);
        v8 = (v6 ^ 0x4F) & 63;
        printf("%c", v8);
        v9 = v5 * v6;
        v9 = ((unsigned int)v9 ^ 0xEFBE) & 63;
        printf("%c\n", v9);
    }
    return (0);
}
