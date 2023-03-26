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
	int n;
	long int rev = 10;
	int len = 0

	n = va_arg(list, int);

	if (n < 0)
	{
		_write('-');
		len++;
		n *= -1;
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
