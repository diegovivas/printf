#include "holberton.h"
#include <stdarg.h>

/**
 * _withformat - prints depending the format
 * @format: the format sent by the main
 * @i: index of _printf loop
 * @count: characters printed;
 * @valist: va_list args
 * Return: @count the number of characters printed
 */
int _withformat(const char *format, int i, int count, va_list valist)
{
	/*HERE THE DIFERENT IDENTIFIERS*/
	/*Scaping double %%*/
	if (format[i + 1] == '%')
	{
		int c = format[i + 1];
		_putchar(c);
	}
	/*FOR CHARACTERS (%c)*/
	if (format[i + 1] == 'c')
	{
		int c = va_arg(valist, int);

		_putchar(c);
	}
	/*TODO:DIEGO please make sure this work properlly (%s)*/
	if (format[i + 1] == 's')
	{
		char s = va_arg(valist, char*);

		_putchar(s);
	}

	/*TODO: DIEGO please make the function to print ints (%d)*/
	if (format[i + 1] == 'd')
	{

	}

	/*TODO: MIKE please make the function to print ints in base 10(%i)*/
	if (format[i + 1] == 'd')
	{

	}

	return (count);
}

/**
 * _printf - Fuction that prints to the std output
 * @format: list of parameters passed
 * Return: @count the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list valist;
	int i = 0;
	int count = 0;

	va_start(valist, format);
	while (format && format[i])
	{
		if (format[i] != '%')
		{
			count++;
			/*FOR NO ARGUMENTS*/
			_putchar(format[i]);
		} else
		{
			/* FUCTION THAT TAKES ALL OTHER CASES WITH FORMAT*/
			/* WE HAD TO CREATE THIS BECAUSE BETTY (40 LINES PER FUCNTION)*/
			count = _withformat(format, i, count, valist);
			i++; /*This will skip the next character after (%)*/
		}
		i++;
	}
	va_end(valist);
	return (count);
}
