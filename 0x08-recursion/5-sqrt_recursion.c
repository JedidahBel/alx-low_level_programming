#include "main.h"

/**
 * find_sqrt - Finds the natural square root of an inputed number
 * @num: the number to find the square root of
 * @root: the root to be checked
 *
 * Return: If a number has a natural square root - the square root.
 *		if the number does not have a natural square root - -1.
 *
 */
int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to return square root
 *
 * Return: if n has a natural square root - the natural square root of n
 *		if n does not have a natural square root - -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
