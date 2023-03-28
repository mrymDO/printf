#include "main.h"
#include<stdarg.h>
#include<stdlib.h>
/**
 * print_all - check the type of format
 *
 * @c: type we want print them
 * @arg: argument
 * @len: len returned
 *
 * Return: void
 */
void print_all(char c, va_list arg, int *len)
{
	if (c == '%')
		*len += _putchar('%');
	else if (c == 'c')
		*len += _putchar(va_arg(arg, int));
	else if (c == 's')
		*len += _putstr(va_arg(arg, char *));
	else if (c == 'd' || c == 'i')
		print_number(va_arg(arg, int), len);
	else if (c == 'b')
		print_binary(va_arg(arg, int), len);
	else if (c == 'u')
		print_unsigned_number(va_arg(arg, int), len);
	else if (c == 'o')
		print_octal_number(va_arg(arg, int), len);
	else if (c == 'x' || c == 'X')
		print_hex_number(va_arg(arg, int), c, len);
	else if (c == 'S')
		print_string(va_arg(arg, char *), len);
	else if (c == 'p')
	{
		*len += _putstr("0x");
		print_adress(va_arg(arg, unsigned long), "0123456789abcdef", len);
	}
	else if (c == 'r')
		rev_print(va_arg(arg, char *), len);
	else if (c == 'R')
		rot(va_arg(arg, char *), len);
}
/**
 * _printf - code our printf
 *
 * @format: type we want print them
 *
 * Return: lenght
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i;
	int len = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
			{
				va_end(arg);
				return (-1);
			}
			else if (format[i])
				print_all(format[i], arg, &len);
		}
		else
			len += _putchar(format[i]);
	}
	va_end(arg);
	return (len);
}
