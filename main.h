#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdarg.h>
#include <stdlib.h>

typedef int (*ConversionHandler)(va_list);

int _printf(const char *format, ...);


int _print_string(va_list arguments);
int _print_char(va_list arguments);

#endif
