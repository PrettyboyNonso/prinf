#include "main.h"
#include <unistd.h>

int handle_format_specifier(char specifier, va_list arguments)
{
	ConversionHandler handler = NULL;

	switch (specifier)
	{
		case 's':
			handler = _print_string;
			break;
		case 'c':
			handler = _print_char;
			break;
		case '%':
			write(1, "%", 1);
			return (1);
			break;
		default:
			write(1, &specifier, 1);
			return (1);
	}
	return (handler ? handler(arguments) : 0);
}

int _printf(const char *format, ...)
{
	int char_count;
	int i;
	va_list arguments;

	va_start(arguments, format);

	char_count = 0;

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			char_count++;
		}
		else
		{
			i++;
			if (format[i] == '\0')
				break;

			char_count += handle_format_specifier(format[i], arguments);
		}
	}

	va_end(arguments);
	return (char_count);
}
