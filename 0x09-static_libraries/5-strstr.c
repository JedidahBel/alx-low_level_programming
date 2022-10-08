#include "main.h"
#include <string.h>

/**
 * _strstr - locates a substring
 * @haystack: string to check for needle
 * @needle: substring to match
 * Return: pointer to first match or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
