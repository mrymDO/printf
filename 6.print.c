#include "main.h"

#define HEX_BASE 16
#define HEX_LENGTH 16
#define NULL_STRING "(NULL)"
#define NULL_STRING_LENGTH 6


/**
 * print_pointer - print pointer
 * @ptr : pointer
 * @len: length
 * Return: void
 */
void print_pointer(void *ptr, int *len)
{
	unsigned long int addr = (unsigned long int)ptr;
	char hex[HEX_LENGTH] = {0};
	int i, digit;

	if (addr == 0)
	{
		_putstr(NULL_STRING);
		*len += NULL_STRING_LENGTH;
		return;
	}

	_putstr("0x");

	for (i = 0; addr > 0; i++)
	{
		digit = addr % HEX_BASE;
		if (digit < 10)
		{
			hex[i] = digit + '0';
		}
		else
		{
			hex[i] = digit - 10 + 'a';
		}
		addr /= HEX_BASE;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		*len += 1;
	}
}
