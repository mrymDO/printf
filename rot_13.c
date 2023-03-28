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
	int j;

	char ca[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chare[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == ca[j])
			{
				str[i] = chare[j];
				break;
			}
		}
	}
	*len += _putstr(str);
}
