#include "main.h"
#include <stdio.h>


/**
 *  _isupper - Check if parameter c represents an uppercase letter.
 *  @c: Int represanting a character
 *  Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
