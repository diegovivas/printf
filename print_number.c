#include "holberton.h"

/**
 * print_number - printing numbers with putchar (Thanks Daniel "El profe")
 * @n: number to print
 * Return: no return.
 */
int print_number(int n)
{
	int div = 1;
	int count = 0;

	if (n < 0)
	{
		n = ~n + 1;
		_putchar('-');
		count++;
	}
	while (div <= n)
		div *= 10;
	while (n > 0)
	{
		div /= 10;
		_putchar((n / div) + '0');
		n %= div;
		count++;
	}
	return (count);
}
