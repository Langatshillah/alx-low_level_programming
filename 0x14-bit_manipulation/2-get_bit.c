#include "main.h"
#include <stdio.h>
/**
 * get_bit - get the value of a bit a a given index
 * @n: number to evaluate
 * @index: index starting from 0, of a bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
