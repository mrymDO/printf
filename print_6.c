#include "main.h"

/**
 * print_pointer - print pointer
 * @ptr: pointer
 * @len: length
 * Return: void
 */

void print_pointer(void *ptr, int *len)
{
	unsigned long int addr = (unsigned long int)ptr;
	char hex[16] = {0};
	int i, digit;

	_putstr("0x");

	if (addr == 0)
	{
		_putstr("(NULL)");
		*len += 6;

		return;
	}

	for (i = 0; addr > 0; i++)
	{
		digit = addr % 16;

		if (digit < 10)
		{
			hex[i] = digit + '0';
		}
		else
		{
			hex[i] = digit - 10 + 'a';
		}

		addr /= 16;
	}
	for (i -= 1; i >= 0; i--)
	{
		_putchar(hex[i]);
		*len += 1;
	}
}

