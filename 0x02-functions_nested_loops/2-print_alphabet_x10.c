#include "main.h"


/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase.
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int b = 0;

	while (b < 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		b++;
	}
}
