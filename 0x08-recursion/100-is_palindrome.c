#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s)
	return (1 + _strlen(s + 1));
	return (0);
}

/**
 * compare_ends - this fuction checks if a string is palindrome by
 * recursively checking the both ends of a string till
 * it gets to the mid point
 *
 * @start: pointer to the start of the string
 * @end: pointer to end of string
 * @mid: number specifying how far away the mid point is
 *
 * Return: 1 if string is palindrome, else 0
 */
int compare_ends(char *start, char *end, int mid)
{
	if (mid == 0)
	return (*start == *end ? 1 : 0);

	if (*start != *end)
		return (0);

	return (compare_ends(start + 1, end - 1, mid - 1));
}

/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to be checked
 *
 * Return: 1 if string is palindrome else 0
 */
int is_palindrome(char *s)
{
	unsigned int mid, l = _strlen(s);

	if (l < 2)
		return (1);

	mid =  l / 2;

	if (l % 2 == 1)
		mid += 1;

	return (compare_ends(s, s + l - 1, mid - 1));

}
