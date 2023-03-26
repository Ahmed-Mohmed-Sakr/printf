#include "main.h"

/**
 * p_persent - to print persent
 *
 * @list: not used but to get same format
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_persent(__attribute__((unused)) va_list list)
{
	return (_write('%'));
}
