#include "main.h"

/**
 * print_unsigned_number - print unsigned number
 * @number: unsigned integer to be printed as a strinf of digits
 * @len: a pointer to integer that tracks the total length of printed string
 * Return: void
 */

void print_unsigned_number(unsigned int number, int *len)
{
	if (number > 9)
	{
		print_unsigned_number(number / 10, len);
	}
	*len += _putchar((number % 10) + '0');
}

/**
 * print_octal_number - print octal number
 * @number: input
 * @len: pointer to integer
 * Return: void
 */
void print_octal_number(unsigned int number, int *len)
{
	if (number > 7)
	{
		print_octal_number(number / 8, len);
	}
	*len += _putchar(number % 8 + '0');
}

int _toupper(int c);
int _strlen(char *s);
/**
 * print_hex_number - prints an unsigned integer in hexadecimal format
 * @number: the number to print
 * @c: the format specifier ('x' or 'X')
 * @len: pointer to length
 * Return : void
 */

void print_hex_number(unsigned int number, char c, int *len)
{
	char hex_digits[16] = "0123456789abcdef";
	char hex_string[32] = {0};
	int i, j;

	/* convert number to hexadecimal string */
	i = 30;
	do {
		hex_string[i--] = hex_digits[number % 16];
		number /= 16;
	} while (number != 0);

	/* print hexadecimal string with appropriate format specifie */
	if (c == 'x')
	{
		_putstr(&hex_string[i + 1]);
	}
	else if (c == 'X')
	{
		for (j = i + 1; hex_string[j] != '\0'; j++)
			hex_string[j] = _toupper(hex_string[j]);
		_putstr(&hex_string[i + 1]);
	}
	/* update length */
	*len += _strlen(&hex_string[i + 1]);
}

/**
 * _strlen - calculate length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i]; i++)
		len++;

	return (len);
}
/**
 * _toupper -  convert lower case to its corresponding upper case
 * @c: input
 * Return: upper case
 */
int _toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
