#include "<stdio.h>
/**
 * _strlen - Entry point
 * @str: parameter
 * Return: int
 */
int _strlen(char *str)
{
	int i;
	int count;

	count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
