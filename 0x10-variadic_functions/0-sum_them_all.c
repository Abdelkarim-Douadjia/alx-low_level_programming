#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that sum of all its parameters.
 * @n: the num of arguments
 * @...: A variable number of paramters to calculate the sum of.
 * Return: if (n == 0) return 0,
 *		Otherwise the sum of args
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list s;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(s, n);
	sum = 0;
	for (i = 0; i < n ; i++)
		sum += va_arg(s, int);

	va_end(s);
	return (sum);
}
