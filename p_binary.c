#include "main.h"

/**
 * print_binary - print number in binary represination
 *
 * @n: number to convert.
 *
 * Return: char len.
 */

int print_binary(unsigned int n)
{
	int len = 1;

	if (n > 1)
		len = len + print_binary(n / 2);

	_write('0' + (n % 2));

	return (len);
}

/**
 * p_binary - writes the character.
 *
 * @list: list of arg.
 *
 * Return: char len
 */
int p_binary(va_list list)
{
	unsigned int n = va_arg(list, unsigned int);

	return (print_binary(n));
}
