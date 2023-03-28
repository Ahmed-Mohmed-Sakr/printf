#include "main.h"

/**
 * p_unsigned_int - writes the unsigned int.
 *
 * @list: list of arg.
 *
 * Return: num len.
 */
int p_unsigned_int(va_list list)
{
	unsigned int n;
	long int rev = 1;
	int len = 0;

	n = va_arg(list, unsigned int);

	if (n == 0)
	{
		_write('0');
		return (1);
	}

	if (n < 1)
		return (-1);

	while (n > 0)
	{
		rev = (rev * 10) + (n % 10);
		n /= 10;
	}

	while (rev > 1)
	{
		_write('0' + rev % 10);
		rev /= 10;
		len++;
	}

	return (len);
}
