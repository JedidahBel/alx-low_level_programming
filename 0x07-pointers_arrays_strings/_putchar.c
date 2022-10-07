#include <unistd.h>

/**
 * _putchar - writes char c to stdout
 * @c: character to print 
 * Return: 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
