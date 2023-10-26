#include "main.h"

/**
 * _pow_recursion - function similar to pow fun
 *
 * @x: number input
 * @y: power number input
 *
 * Return: if y lower that 0 return (-1)
 *	Otherwise calcul the power
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
