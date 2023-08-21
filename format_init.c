#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include "format_init.c"
/**
 * _printf - Entry
 * @format: param
 * Return: Always int
 */
int _printf(const char *format, ...)
{
	va_list arguments;

	va_start(arguments, format);

	int counter;
	int i;

	counter = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 's')
			{
				format_initialize.s(arguments, counter);
				i++;
			}
			else if (format[i + 1] == 'c')
			{
				format_initialize.c(arguments, counter);
				i++;
			}
			else if (format[i + 1] == '%')
			{
			format_initialize.percent(arguments, counter);
			i++;
			}
		}
		else
		{
		write(1, &format[i], 1);
		counter++;
		}
	}
	return (counter);
}

