#ifndef MAIN_H
#define MAIN_H

/*lib*/
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/*functions*/
int _printf(const char *format, ...);
int parse(const char *format, va_list);
int _write(char c);
int p_char(va_list);
int p_int(va_list);
int p_string(va_list);
int p_persent(va_list);
int p_binary(va_list);

/**
* struct _map - defines a structure for symbols and functions
*
* @op: The operator
* @f: The function associated
*/
struct _map
{
	char *op;
	int (*f)(va_list);
};
typedef struct _map struct_map;

#endif /*MAIN_H*/
