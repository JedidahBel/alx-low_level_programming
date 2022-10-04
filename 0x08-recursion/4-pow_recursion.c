#include "main.h"
/**
 * _pow_recursion - return the value of a baise raised to an exponent
 * @x: the  base
 * @y: the exponent
 * Return: x raise to power y
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);

	if (y == 1)
		return (x);

	if (y == 0)
		return (1);

	if (y < 0)
		return (-1);

	return (x *  _pow_recursion(x, y - 1));
}
