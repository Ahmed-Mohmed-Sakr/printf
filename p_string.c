#include "main.h"

/**
 * p_string - writes the string.
 *
 * @list: list of arg.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char*);

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		_write(s[i]);
	}
	return (1);
}
