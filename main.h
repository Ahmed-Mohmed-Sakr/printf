#ifndef MAIN_H
#define MAIN_H

/*lib*/
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/*functions*/
int _printf(const char *format, ...);
int parse(const char *format, va_list);
int _write(char c);
int p_char(va_list);
int p_int(va_list);
int p_string(va_list);


#endif /*MAIN_H*/
