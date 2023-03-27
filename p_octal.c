#include "main.h"

/**
 * p_octal - Print  number in octal base
 * @list: va_list parameter
 * Return: Number of printed char
*/

int p_octal(va_list list)
{
	long int n, num, h, octal_size = 0;
	char *oct;

	n = va_arg(list, long int);

	if (n == 0)
	{
		_write('0');
		return (1);
	}

	if (n < 0)
		return (-1);

	num = n;

	for (h = 0; num > 0; h++)
		num /= 8;

	oct = malloc(sizeof(char) * h + 1);

	if (oct == NULL)
		return (-1);

	for (h = 0; n > 0; h++)
	{
		oct[h] = '0' + (n % 8);
		n /= 8;
	}

	oct[h] = '\0';

	octal_size = h;

	for (h-- ; h >= 0; h--)
		_write(oct[h]);

	return (octal_size);
}
