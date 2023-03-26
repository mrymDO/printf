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
	while (str[i])
		write(1, &str[i++], 1);
	return (i);
}
