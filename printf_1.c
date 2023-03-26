#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

char *_itoa(int i, char *strout, int base);
char *_itoa(int i, char *strout, int base);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

/**
 * _printf - print a string with arguments
 * @format : string to be printed
 * Return: length
 */
int _printf(const char *format, ...)
{
	va_list vl;
	int i = 0, j = 0;
	char buff[100] = {0}, tmp[20];
	char *str_arg;

	va_start(vl, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					buff[j] = (char)va_arg(vl, int);
					j++;
					break;
				case 'd':
				case 'i':
					_itoa(va_arg(vl, int), tmp, 10);
					_strcpy(&buff[j], tmp);
					j += _strlen(tmp);
					break;
				case 's':
					str_arg = va_arg(vl, char *);
					_strcpy(&buff[j], str_arg);
					j += _strlen(str_arg);
					break;
				case '%':
					j += _putchar('%');
					break;
			}
		}
		else
		{
			buff[j] = format[i];
			j++;
		}
		i++;
	}
	fwrite(buff, j, 1, stdout);
	va_end(vl);
	return (j);
}

/**
 * _strlen - A function that returns the lenght of a string
 * @s: string
 * Return: lengh
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - a function that copies a string
 * @dest:  buffer pointed to by dest
 * @src: string pointed to by src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * rev_string - A function that reverses a string
 * @s: String to reverse
 * Return: s
 */
char *str_rev(char *str)
{
	int i;
	int len = 0;
	char temp;

	if (!str)
		return (NULL);

	while (str[len] != '\0')
		len++;

	for (i = 0; i < (len / 2); i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	return (str);
}

/**
 * _itoa - convert an integer into a string
 * @i : input
 * @strout : string
 * @base: input
 * return: strout
 */
char *_itoa(int i, char *strout, int base)
{
	char *str = strout;
	int digit, sign = 0;

	if (i < 0)
	{
		sign = 1;
		i *= -1;
	}

	while (i)
	{
		digit = i % base;
		*str = (digit > 9) ? ('A' + digit - 10) : '0' + digit;
		i = i / base;
		str++;
	}
	if (sign)
	{
		*str++ = '-';
	}
	*str = '\0';
	str_rev(strout);
	return (strout);
}
