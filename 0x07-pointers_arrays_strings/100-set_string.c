#include "main.h"

void set_string(char **s, char *to)
{
	unsigned int i;

	i = 1;
	while (to[i++])
	{
		s[i] = &to[i];
	}
}
