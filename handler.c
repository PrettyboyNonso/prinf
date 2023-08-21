#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include "main.h"
/**
 * handle_strings - Entry code
 * @arguments: param
 * @counter: param
 * Return: void
 */
void handle_strings(va_list arguments, int counter)
{
	int j;
	char *arg_value;

	char *arg_value = va_arg(arguments, char *);

	if (arg_value == NULL)
	{
		write(1, "(null)", 6);
		counter += 6;
	}
	else
	{
	for (j = 0; arg_value[j] != '\0'; j++)
	{
		write(1, &arg_value[j], 1);
		counter++;
	}
	}
}
/**
 * handle_characters - Entry
 * @arguments: param
 * @counter: param
 * Return: void
 */
void handle_characters(va_list arguments, int counter)
{
	char arg_value = (char)va_arg(arguments, int);

	write(1, &arg_value, 1);
	counter++;
}
/**
 * handle_percent - Entry
 * @arguments: param
 * @counter: param
 * Return: void
 */
void handle_percent(va_list arguments, int counter)
{
	write(1, "%", 1);
	counter++;
}
