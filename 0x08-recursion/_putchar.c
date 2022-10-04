#include <unistd.h>

/**
 * _putchar - writes character
 * @c: The character to print
 * Return: a positive number on succcess and -1 on failure
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
