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

	if (str == NULL)
	{
		write(1, "(nill)", 6);
		return (6);
	}
	else
		for (i = 0; str[i] != '\0'; i++)
			_putchar(str[i]);
	return (i);
}
