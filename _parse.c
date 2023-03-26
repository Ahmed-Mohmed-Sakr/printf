#include "main.h"

/**
 * _parse - a function that check format of printf function
 * and send instruction to appropriate method
 *
 * @format: string parmaeter that hold format from printf
 * @list : va_list parameters that hold parameters from printf
 *
 * Return: number of printed character.
*/

int parse(const char *format, va_list  list)
{
	_map type_list[] = {
		{"c", p_char},
		{"s", p_string},
		{"d", p_int},
		{"i", p_int}
		{NULL, NULL}
		};

	int h, d, num_char = 0, find_f;

	for (h = 0; format[h] != '\0'; h++)
	{
		if (format[h] == '%')
		{
			for (d = 0; type_list[d].op != NULL; d++)
			{
				if (format[h + 1] == type_list[d].op[0])
				{
					find_f = type_list[d].f(list);
					if (find_f == -1)
						return (find_f);
					num_char += find_f;
					break;
				}
			}
			
}
