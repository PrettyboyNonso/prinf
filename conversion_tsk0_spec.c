#include <unistd.h>
#include "
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
 * _print_int - Entry point
 * @arguments: param
 * Return: int
 */

int _print_int(va_list arguments)
{
	int i;
	int arg_value;
	char *newint;
	int char_count;

	char_count = 0;

	arg_value = va_arg(arguments, int);
	newint = intToString(arg_value);
	if (arg_value == 0)
	{
	write(1, "0", 1);
	char_count++;
	}
	else
	{
	for (i = 0; newint[i] != '\0'; i++)
        {
		write(1, &newint[i], 1);
		char_count++;
	}
	}
	return (char_count);
}
