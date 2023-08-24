#include "main.h"
/**
 * intToString - Entry point
 * @n: param
 * Return: char
 */
char *intToString(int n)
{
	char *new_str;
	int remainder;
	char *reversed;
	int count;

	count = 0;
	new_str = malloc(sizeof(char) * 20);
	if (n == 0)
	{
	n = '0';
	}
	else if (n > 0)
	{
		while (n > 0)
		{
			remainder = n % 10;
			new_str[count] = remainder + '0';
			n = n / 10;
			count++;
		}
	}
	else if (n < 0)
	{
		n = n * -1;
		count = 1;
		while (n != -0)
		{
			remainder = n % 10;
			new_str[count] = remainder + '0';
			n = n / 10;
			count++;
		}
		new_str[0] = '-';
	}
	new_str[count] = '\0';
	reversed = reversestr(new_str);

	return (reversed);
}
