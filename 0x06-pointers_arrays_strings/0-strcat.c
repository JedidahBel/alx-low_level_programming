#include "main.h"

/**
 * -strcat - a function that concatenates two strings
 *  @dest: string 1
 *  @src: string 2
 *  Return: pointer
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	char *ptr;

	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	ptr = dest;
	return (ptr);
}

