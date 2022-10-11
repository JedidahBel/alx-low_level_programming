#include <stdio.h>

/**
 * main - entry point
 *	print all arguments sent, one on a line
 *
 * @argc: count of arguments
 * @argv: list of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;



	for (i = 0; i < argc; i++)

		printf("%s\n", argv[i]);

	return (0);

}
