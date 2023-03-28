#include "main.h"

/**
 * functionsList - contain list of functions to execte.
 *
 *
 * Return: array of strct.
 */
struct_map *functionsList()
{
	/*to redirect each exist char to it's own function*/
	static struct_map type_list[] = {
		{"c", p_char},
		{"s", p_string},
		{"d", p_int},
		{"i", p_int},
		{"%", p_persent},
		{"b", p_binary},
		{"u", p_unsigned_int},
		{"o", p_octal},
		{NULL, NULL}
	};
	return (type_list);
}

/**
 * parse - a function that check format of printf function
 * and send instruction to appropriate method
 *
 * @format: string parmaeter that hold format from printf
 * @list : va_list parameters that hold parameters from printf
 *
 * Return: number of printed character.
*/

int parse(const char *format, va_list  list)
{
	struct_map *type_list = functionsList();
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
			if (type_list[d].op == NULL && format[h + 1] != ' ')
			{
				if (format[h + 1] != '\0')
				{
					_write(format[h]);
					_write(format[h + 1]);
					num_char += 2;
				}
				else
					return (-1);
			}
			h++;
		}
		else
		{
			_write(format[h]);
			num_char++;
		}
	}
	return (num_char);
}
