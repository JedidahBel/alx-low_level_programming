#include <stdio.h>

/**
 * main - entry point
 * 	prints number of arguments entered, then exit.
 *
 * @argc: count of arguments entered
 * @argv: list of arguments entered
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
