#include "main.h"

/**
 * factorial - function calcul factorial of a number
 *
 * @n: number input
 *
 * Return: if n less that 0 return (0),
 *	Otherwise return the fact num
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
