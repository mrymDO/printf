#include "main.h"
/**
 * print_binary - function convert number to binary
 *
 * @number: number to convert
 * @len: input
 *
 * Return: void
 */
void print_binary(int number, int *len)
{
	if (number < 0)
	{
		*len += _putchar('-');
		number *= -1;
	}
	if (number <= 1)
		*len += _putchar(number + 48);
	if (number > 1)
	{
		print_binary(number / 2, len);
		print_binary(number % 2, len);
	}
}
