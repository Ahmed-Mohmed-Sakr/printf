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
	int n;
	long int rev = 10;

	n = va_arg(list, int);

	if (n < 0)
	{
		_write('-');
		n *= -1
	}

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
