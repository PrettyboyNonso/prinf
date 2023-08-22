#include <unistd.h>
#include "main.h"
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
int _print_char(va_list arguments)
{
	char arg_value;
	arg_value = (char)va_arg(arguments, int);
	write(1, &arg_value, 1);
	return (1);
}

