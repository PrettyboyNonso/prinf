#include <unistd.h>
#include "main.h"
/**
 * _print_string - Entry point
 * @arguments: param
 * Return: int
 */
int _print_string(va_list arguments)
{
	char *arg_value;
	int char_count;
	int j;

	arg_value = va_arg(arguments, char *);
	if (arg_value == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	else
	{
		char_count = 0;
		for (j = 0; arg_value[j] != '\0'; j++)
		{
			write(1, &arg_value[j], 1);
			char_count++;
		}
		return (char_count);
	}
}
/**
 * _print_char - Entry point
 * @arguments: param
 * Return: int
 */
int _print_char(va_list arguments)
{
	char arg_value;

	arg_value = (char)va_arg(arguments, int);
	write(1, &arg_value, 1);
	return (1);
}
/**
 * _print_char - Entry point
 * @arguments: param
 * Return: int
 */
int _print_int(va_list arguments)
{
int arg_value = va_arg(arguments, int);
    int char_count = 0;

    if (arg_value < 0) {
        write(1, "-", 1);
        char_count++;
        arg_value = -arg_value;
    }

    char int_buffer[12]; // Maximum length of a 32-bit integer + 1 for null terminator
    int num_digits = 0;

    if (arg_value == 0) {
        write(1, "0", 1);
        return 1;
    }

    while (arg_value > 0) {
        int digit = arg_value % 10;
        int_buffer[num_digits] = digit + '0';
        num_digits++;
        arg_value /= 10;
    }

    for (int i = num_digits - 1; i >= 0; i--) {
        write(1, &int_buffer[i], 1);
        char_count++;
    }

    return char_count;
}
