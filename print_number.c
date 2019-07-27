#include "holberton.h"

/**
 * print_number - printing numbers with putchar (Thanks Daniel "El profe")
 * @n: number to print
 * Return: no return.
 */
int print_number(int n)
{
	int count = 0;
	unsigned int x = n;

	if (n < 0)
	{
		x = ~x + 1;
		_putchar('-');
		count++;
	}
	if ((x / 10) > 0)
		print_number(x / 10);
	_putchar((x % 10) + '0');
	count++;
	return (count);
}
