#include "main.h"

/**
 * swap_int : swaps values pointed to by arguments
 * @a: pointer argument 1
 * @b: pointer argument 2
 */
void swap_int(int *a, int *b)
{
	int num = *a;

	*a = *b;
	*b = num;
}
