#include "main.h"

/**
 * p_int - writes the int.
 *
 * @list: list of arg.
 *
 * Return: num len.
 */
int p_int(va_list list)
{
	unsigned int n;
	int y;
	long int rev = 10;
	int len = 0;

	y = va_arg(list, int);

	if (y == 0)
	{
		_write('0');
		return (1);
	}

	if (y < 0)
	{
		_write('-');
		len++;
		n = y * -1;
	}
	else
	{
		n = y;
	}

	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}

	while (rev > 10)
	{
		_write('0' + rev % 10);
		rev /= 10;
		len++;
	}

	return (len);
}
