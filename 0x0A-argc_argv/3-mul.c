#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *	print the result of multiplying two
 *	integers supplied as arguments.
 * @argc: count of arguments
 * @argv: list of arguments
 * Return: 0, else return 1
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	printf("%d\n", a * b);

	return (0);

}
