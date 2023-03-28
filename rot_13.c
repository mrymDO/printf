#include "main.h"
/**
 * rot - function crypt string
 *
 * @str: str
 * @len: lenght string
 *
 * Return: void
 */
void rot(char *str, int *len)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
			str[i] += 13;
		else if ((str[i] >= 'N' && str[i] <= 'Z') ||
				(str[i] >= 'n' && str[i] <= 'z'))
			str[i] -= 13;
		*len += _putchar(str[i]);
	}
}
