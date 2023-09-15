#include <stdio.h>

/**
 * _sqrt - finds the square root
 *
 * @x: function parameter
 *
 * Return: square root of x
 */

double _sqrt(double x)
{
	float sqrt, t;

	sqrt = x / 2;
	t = 0;

	while (sqrt != t)
	{
		t = sqrt;
		sqrt = (x / t + t) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - prints the largest prime factor
 *
 * @n: function parameter
 *
 * Return: void
 *
 */

void largest_prime_factor(long int n)
{
	int p, largest;

	while (n % 2 == 0)
		n = n / 2;

	for (p = 3 ; p <= _sqrt(n) ; p += 2)
	{
		while (n % p == 0)
		{
			n = n / p;
			largest = p;
		}
	}

	if (n > 2)
		largest = n;
	printf("%d\n", largest);
}

/**
 * main - main function
 *
 * Return: 0
 *
 */

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
