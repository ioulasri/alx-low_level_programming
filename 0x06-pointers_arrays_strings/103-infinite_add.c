#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: the array of integers
 * @n: the size of the array
 **/

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
 * _strlen - returns the length of a given string
 * @s: the string
 * Return: the length of given string
 */

int _strlen(char *s)
{
    int i;

    i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
}

char* infinite_add(char* n1, char* n2, char* r, int size_r) {
    if (n1 == NULL || n2 == NULL || r == NULL || size_r < 1) {
        return 0;
    }
    
    int len1;
    int len2;
    int carry;
    int sum;
    int idx1;
    int idx2;
    int idxr;
    char temp;
    int digit1;
    int digit2;

    len1 = _strlen(n1);
    len2 = _strlen(n2);
    carry = 0;
    sum = 0;
    idx1 = len1 - 1;
    idx2 = len2 - 1;
    idxr = 0;

    // add digits from right to left until one of the strings is exhausted
    while (idx1 >= 0 || idx2 >= 0) {
        digit1 = (idx1 >= 0) ? n1[idx1] - '0' : 0;
        digit2 = (idx2 >= 0) ? n2[idx2] - '0' : 0;
        
        sum = digit1 + digit2 + carry;
        carry = sum / 10;
        sum %= 10;
        
        // check if there is enough space in the result buffer
        if (idxr >= size_r - 1) {
            return 0;
        }
        
        r[idxr] = sum + '0';
        idxr++;
        idx1--;
        idx2--;
    }
    
    // if there is still a carry digit left, add it to the result
    if (carry != 0) {
        if (idxr >= size_r - 1) {
            return 0;
        }
        
        r[idxr] = carry + '0';
        idxr++;
    }
    
    // terminate the result string with a null character
    r[idxr] = '\0';
    
    // reverse the result string to get the correct order of digits
    for (int i = 0; i < idxr / 2; i++) {
        temp = r[i];
        r[i] = r[idxr - i - 1];
        r[idxr - i - 1] = temp;
    }
    
    return r;
}
