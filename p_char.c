#include "main.h"

/**
 * p_char - writes the character.
 *
 * @list: list of arg.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_char(va_list list)
{
	return (_write(va_arg(list, int)));
}
