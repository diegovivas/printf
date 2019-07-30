#include "holberton.h"
#include <stdint.h>
/**
 * print_hl - convert unsigned int in hexadecimal
 *@n: unsigned int
 * Return: numer times print
 */
int print_hl(intptr_t n)
{
	intptr_t quotient;
	int cont = 1, cont2, temp;
	char hexadecimalNumber[100];
	int count = 0;

	quotient = n;
	while (quotient != 0)
	{
		temp = quotient % 16;

		if (temp < 10)
			temp = temp + 48;
		else
			temp = temp + 87;

		hexadecimalNumber[cont++] = temp;
		quotient = quotient / 16;
	}
	for (cont2 = cont - 1 ; cont2 > 0; cont2--, count++)
		_putchar(hexadecimalNumber[cont2]);

	return (count);
}


