#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @x: first number
 * @y: second number
 * Return: number of bits to change
*/

unsigned int flip_bits(unsigned long int x, unsigned long int y)
{
	int n, countbit = 0;
	unsigned long int current;
	unsigned long int exclusive = x ^ y;

	for (n = 63; n >= 0; n--)
	{
		current = exclusive >> n;
		if (current & 1)
			countbit++;
	}

	return (countbit);
}
