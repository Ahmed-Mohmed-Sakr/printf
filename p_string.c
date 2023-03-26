#include "main.h"

/**
 * p_string - writes the string.
 *
 * @list: list of arg.
 *
 * Return: len of char printed.
 */
int p_string(va_list list)
{
	int i;
	char *s;

	s = va_arg(list, char*);

	if (s == NULL)
		s = "(null)";

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		_write(s[i]);
	}

	return (i);
}
