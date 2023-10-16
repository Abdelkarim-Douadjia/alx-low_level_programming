#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of two integers.
 * @a: first variable.
 * @b: second variable.
 *
 * Return: Nothing or Void.
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
