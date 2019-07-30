#include "holberton.h"
/**
 * rot13 - encode rot13
 * @s: string to encode
 * Return: (count)
 */
int rot13(char *s)
{
int a, b;
char first[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char second[52] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

a = 0;
while (s[a] != 0)
{
	for (b = 0; b < 52; b++)
	{
		if (s[a] == first[b])
		{
			s[a] = second[b];
			break;
		}
	}
	a++;
}
return (_printstring(s));
}
