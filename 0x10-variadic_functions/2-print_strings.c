#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints Strings, followed by a new line.
 * @separator: The string to be printed between Strings.
 *
 * @n: The number of Strings passed to the function.
 * @...: A variable number of Strings to be printed.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list op;
	unsigned int i;
	char *str;

	va_start(op, n);

	for (i = 0; i < n ; i++)
	{
		str = va_arg(op, char *);

		printf("%s", str ? str : "(nil)");

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(op);
}


