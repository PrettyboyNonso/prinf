#include <limits.h>
#include <" ">
#include "main.h"
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
   
    _printf("Hello\0World");
    printf("Hello\0World");
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Percent:[%%]\n");
    printf("Percent:[%%]\n");
    _printf("Unknown:[%r% %s %c]\n", "hi", 'i');
    printf("Unknown:[%r% %s %c]\n", "hi", 'i');
    return (0);
}
