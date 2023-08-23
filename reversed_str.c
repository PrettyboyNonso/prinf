#include "main.h"
/**
 * reversestr - Entry
 * @str: param
 * Return: char
 */
char *reversestr(char *str)
{
	int i;
	char *reversestr;
	int lenght;

	lenght = _strlen(str);
	reversestr = malloc(lenght + 1);

	if (str[0] == '-')
	{
		reversestr[0] = '-';
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-')
		{
			continue;
		}
		reversestr[(lenght - i) - 1 + (str[0] == '-')] = str[i];
	}

	reversestr[lenght] = '\0';

	return (reversestr);
}
