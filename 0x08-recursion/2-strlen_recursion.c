#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * return: the length of s 
 */
int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
