#include "holberton.h"
/**
 * print_hexaup - Print number in hexadecimal with upper numbers
 *@n: unsigned int
 * Return: numer times print
 */
int print_hexaup(unsigned int n)
{
	long int decimalNumber, remainder, quotient;
	int cont1 = 1, cont2, temp;
	char hexadecimalNumber[100];
	int count = 0;

	quotient = n;
	while (quotient != 0)
	{
		temp = quotient % 16;
		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 55;
		hexadecimalNumber[cont1++] = temp;
		quotient = quotient / 16;
	}
	for (cont2 = cont1 - 1; cont2 > 0; cont2--, count++)
		_putchar(hexadecimalNumber[cont2]);

	return (count);
}
