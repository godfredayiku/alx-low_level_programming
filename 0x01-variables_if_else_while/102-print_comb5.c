#include <stdio.h>

/**
 * main - this is the main function
 * Return: returns 0 when successful
 */

int main(void)
{
	int f1 = 0, f2;

	while (f1 <= 99)
	{
		f2 = f1;
		while (f2 <= 99)
		{
			if (f2 != f1)
			{
				putchar((f1 / 10) + 48);
				putchar((f1 % 10) + 48);
				putchar(' ');
				putchar((f2 / 10) + 48);
				putchar((f2 % 10) + 48);

				if (f1 != 98 || f2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			f2++;
		}
		f1++;
	}
	putchar('\n');

	return (0);
}
