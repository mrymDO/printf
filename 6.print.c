#include "main.h"
/**
 * print_adress - function print the adress of pointer in hexadecimal
 *
 * @i: number
 * @s: string
 * @len: lenght
 *
 * Return: void
 */
void print_adress(unsigned long i, char *s, int *len)
{
	if (i > 15)
	{
		print_adress(i / 16, s, len);
		print_adress(i % 16, s, len);
	}
	else
		*len += _putchar(s[i]);

}
