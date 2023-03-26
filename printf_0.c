#include "main.h"
#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>

/**
 * _printf - prints output according to the format
 * @format: character strin
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0;
	int counter = 0;
	char *s;

	if (format == NULL)
		return (-1);
	va_start(arg, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
				case 'c':
					counter += _putchar(va_arg(arg, int));
					i += 2;
					break;

				case 's':
					s = va_arg(arg, char *);
					if (s == NULL)
						s = "(null)";
					else
						counter += _puts(s);
					i += 2;
					break;

				case '%':
					counter += _putchar('%');
					i += 2;
			}
			continue;
		}
		counter += _putchar(format[i]);
		i++;
	} va_end(arg);
	return (counter);
}

/**
 * _puts - prints a string
 * @s: string to be printed
 * Return: number of character of string
 */
int _puts(char *s)
{
	int i = 0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
