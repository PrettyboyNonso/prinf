#include "main.h"
#include <unistd.h>
/**
 * handle_format_specifier - Entry
 * @specifier:param
 * @arguments: param
 * Return: int
 */
int handle_format_specifier(const char *format, int *i, va_list arguments)
{
    ConversionHandler handler = NULL;
    int char_count = 0;

    char specifier = format[*i]; // Get the current specifier

    switch (specifier)
    {
        case 's':
            handler = _print_string;
            break;
        case 'c':
            handler = _print_char;
            break;
        case '%':
            handler = _print_percent;
            break;
        default:
            write(1, "%", 1);
            while (specifier != ' ')
            {
                write(1, &specifier, 1);
                char_count++;
                // Move to the next character in the format string
                (*i)++;
                specifier = format[*i];
            }
            return char_count;
    }

    return handler ? handler(arguments) : 0;
}
/**
 * _printf - Entry point
 * @format: param
 * Return: int
 */
int _printf(const char *format, ...)
{
	int char_count;
	int i;
	va_list arguments;

	va_start(arguments, format);

	char_count = 0;

	if (format == NULL)
	{
		write(1, "", 1);
		return (0);
	}
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
