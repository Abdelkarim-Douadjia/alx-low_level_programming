#include <stdio.h>
#include <stdlib.h>

/**
 * main - printf multiplication of two numbers.
 * @argc: num of commandline arguments.
 * @argv: pointer to an array of command line arguments.
 * Return: 0-success, non-zero-failed.
*/

int main(int argc, char *argv[])
{
	int mul;

	if (argc == 3)
	{
		/*atoi func change the string to integer*/
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);

}
