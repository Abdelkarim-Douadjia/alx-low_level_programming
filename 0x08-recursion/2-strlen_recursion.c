#include "main.h"

/**
 * _strlen_recursion - function like strlen
 *
 * @s: input
 *
 * Return: Length of our string input @s
*/

int  _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}

	length++;
	return (length + _strlen_recursion(s + 1));
}
