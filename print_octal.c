#include "holberton.h"

/**
 * print_octal - print numbers in base 8
 * @n: number to print
 * Return: @count, number or chars printed.
 */
int print_octal(unsigned int n)
{
	static int count = 1;

	count++;
	if (n != 0)
	{
		print_octal(n / 8);
		_putchar((n % 8) + '0');
	}
	return (count - 2);/*It was giving to extra counts lol (MACHETASO)*/
}
