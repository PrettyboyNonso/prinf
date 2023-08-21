#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

typedef void (*format_handler)(va_list argument, int counter);

/**
 * struct Format_pointer_safer - structure
 * @s: A member
 * @c: A member
 * @percent: A member
 */
struct Format_pointer_safer
{
	format_handler s;
	format_handler c;
	format_handler percent;
};

void handle_strings(va_list arguments, int counter);
void handle_characters(va_list arguments, int counter);
void handle_percent(va_list arguments, int counter);

#endif
