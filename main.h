#ifndef _MAIN_H_
#define _MAIN_H_"

#include <stdarg.h>
#include <stdarg.h>
#include <stdlib.h>"

typedef int (*ConversionHandler)(va_list);

int _printf(const char *format, ...);


int _print_string(va_list arguments);
int _print_char(va_list arguments);
int handle_format_specifier(char specifier, va_list arguments);

#endif _MAIN_H_
