#include "main.h"
/**
 * binary - Entry
 * @n: param
 * Return: char
 */
char *binary(int n)
{
	char *new_str;
	int count;
	char *reverse;

	count = 0;
	new_str = malloc((sizeof(char) * 20) + 1);

	while (n > 0)
	{
		new_str[count] = ((n % 2) + '0');
		n = n / 2;
		count++;
	}
	new_str[count] = '\0';
	reverse = reversestr(new_str);
	return (reverse);
}
