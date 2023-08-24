#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
typedef int (*ConversionHandler)(va_list);

int _printf(const char *format, ...);
int _strlen(char *str);
char *reversestr(char *str);
char *intToString(int value);
char *binary(int n);

int _print_string(va_list arguments);
int _print_char(va_list arguments);
int handle_format_specifier(char specifier, va_list arguments);
int _print_int(va_list arguments);
int _print_bin(va_list arguments);
#endif
