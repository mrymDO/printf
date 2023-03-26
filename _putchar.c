#include<unistd.h>
/**
<<<<<<< HEAD
 * _putchar - print a character
 * @c: character to print
=======
 * _putchar - function print chars
 *
 * @c: char
 *
>>>>>>> MY-branch
 * Return: 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
