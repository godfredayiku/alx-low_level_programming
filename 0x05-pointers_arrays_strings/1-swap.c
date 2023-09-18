#include "main.h"

/**
 * swap_int - swaps two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int a2;

	a2 = *a;
	*a = *b;
	*b = a2;
}
