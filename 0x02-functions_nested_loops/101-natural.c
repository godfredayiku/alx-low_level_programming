#include "main.h"

/**
 * main - main function
 *
 * Description: computes the sum of all the multiples
 *
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (y = 0 ; y < 1024 ; y++)
	{
		if ((y % 3 == 0) || (y % 5 == 0))
			x += y;
	}
	printf("%d\n", x);

	return (0);
}
