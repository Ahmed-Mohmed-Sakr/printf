#include "main.h"

/**
 * p_int - writes the int.
 *
 * @list: list of arg.
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int p_int(va_list list)
{
	int i;
	int n;
	long int rev = 10;

	n = va_arg(list, int);

	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}

	while (rev > 10)
	{
		_write(rev % 10);
		rev /= 10;
	}

	return (1);
}
