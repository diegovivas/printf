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

int _withformat(char c, int count, va_list valist)
{
	int j;
	char *s;

	switch (c)
	{
		case 'c':
			j = va_arg(valist, int);
			count += _putchar(j);
			break;
		case 's':
			s = va_arg(valist, char *);
			count += _printstring(s);
			break;
		case '%':
			count += _putchar('%');
			break;

		default:
			count += 2;
			_putchar('%');
			_putchar(c);
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
	int i = 0;
	int count = 0;
	va_list valist;

	va_start(valist, format);

	if (!format)
		return (-1);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			count++;
			_putchar(format[i]);
		}
		else if (format[i + 1])
		{
			i++;
			count = _withformat(format[i], count, valist);
		}
		else
			return (-1);
	}
	va_end(valist);
	return (count);
}
