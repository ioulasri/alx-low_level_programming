#include <stdio.h>

int str_len_rec(char *s)
{
	if (!*s)
		return (0);
	return (1 + str_len_rec(s + 1));
}

int is_palindrome_helper(char *s, int i, int j)
{
	if (i > j)
		return (1);
	if (s[i] != s[j])
		return (-1);
	return (is_palindrome_helper(s, i + 1, j - 1));
}

int is_palindrome(char *s)
{
	if (!s)
		return (1);
	return (is_palindrome_helper(s, 0, str_len_rec(s)-1));
}

int main()
{
	printf("%d\n", is_palindrome("acbba"));
}