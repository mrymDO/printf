#include "main.h"

/**
 * _print - prints output according to the format
 * @format: character strin
 * Return: number of characters
 */

int _print(const char *format, ...)
{
	va_list arg = 0;
	int i = 0;
	int counter = 0;

	va_start(arg, format);

	if (format == NULL)
		return (0);

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
					counter += _puts(va_arg(arg, char *));
					i += 2;
					break;

				case '%':
					counter += _putchar(format[i]);
					i++;
			}
			continue;
		}
		counter += _putchar(format[i]);
		i++;
	}
	va_end(arg);
	return (counter);
}
/**
 * _putchar - print a character
 * @c: character to print
 * Return: 1
 */
int _putchar(char c)
{
	return (1, &c, 1);
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
