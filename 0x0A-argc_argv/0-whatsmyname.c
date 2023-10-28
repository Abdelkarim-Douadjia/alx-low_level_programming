#include <stdio.h>

/**
 * main - Prints peogram name, followed by a new line
 * @argc: int input of number of the arguments entered
 * @argv: pointer to list of argument names string
 * Return: 0
*/

int main(int argc, char const *argv[])
{
	/* Type Casting to avoid the error*/
	/* for the unused argc var*/
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
