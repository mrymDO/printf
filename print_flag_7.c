#include "main.h"


/**
 * print_plus - print the flag '+' for positive numbers
 * @num: the number to print
 * @len: pointer to the length counter
 */

void print_plus(int num, int *len)
{
	if (num >= 0)
		*len += _putchar('+');
	print_number(num, len);
}

/**
 * print_space - print a space before a number if it is positive
 * @num: the number to print
 * @len: pointer to the lenght counter
 */

void print_space(int num, int *len)
{
	if (num >= 0)
		*len += _putchar(' ');
	print_number(num, len);
}

/**
 * print_prefix - print a prefix before the number if it's non-zero
 * @num: the number to print
 * @c: the conversion specifier
 * @len: pointer to the length counter
 */
void print_prefix(int num, char c, int *len)
{
	if (num != 0)
	{
		if (c == 'o')
			*len += _putchar('0');
		else if (c == 'x' || 'X')
			*len += _putstr("0x");
	}
	if (c == 'o')
		print_octal_number(num, len);
	else
	print_hex_number(num, c, len);
}
