#include<unistd.h>
#include "main.h"
/**
 * _putstr - function print a string
 *
 * @str: string
 *
 * Return: return len printed
 */
int _putstr(char *str)
{
	int i;

	i = 0;
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
	return (i);
}
