#include <stdio.h>

/**
 * main - print number of arguments passed.
 * @argc: number of commandline arguments.
 * @argv: pointer to an array of command line arguments.
 * Return: 0 if success, otherwise non zero failed.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
