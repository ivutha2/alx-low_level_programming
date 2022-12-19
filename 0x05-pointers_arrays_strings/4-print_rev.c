#include "main.h"
/**
 * print_rev - prints a string in reverse order
 * @s: a pointer to an int that will be changed
 *
 * Return: void which means our answer is correct
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
		n++;

	for (i = n - 1 ; i >= 0; i--)
	{
		_putchar (s[i]);
	}

	_putchar ('\n');
}
