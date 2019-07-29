#include "holberton.h"
/**
 * print_bi - convert dec to decimal
 *@n:number decimal
 *Return: times of number print
 */
int print_bi(unsigned int n)
{
	int array[25], cont = 0, cont2;
	unsigned int dec;
	int count = 0;

	dec = n;

	while (dec > 0)
	{
		array[cont] = dec % 2;
		dec = dec / 2;
		cont++;
	}
	for (cont2 = cont - 1; cont2 >= 0; cont2--, count++)
		print_number(array[cont2]);

	return (count);
}
