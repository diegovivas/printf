#include "holberton.h"

/**
 * print_unsig - print unsigned numbers
 * @n: number to print
 * Return: @count, number or chars printed.
 */
int print_unsig(unsigned int n)
{
	static int count = 1;

	count++;
	if (n / 10) /*Remove the last digit and recur*/
		print_unsig(n / 10);
	_putchar(n % 10 + '0'); /* Print the last digit */
	return (count - 1); /* one extra count (MACHETAZO LOL) */
}
