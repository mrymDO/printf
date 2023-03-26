#include<unistd.h>
/**
 * _putchar - print a character
 * @c: chaacter to print
 *
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
