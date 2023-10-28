#include <stdio.h>

/**
 * main - programm prints all arguments it receives
 * @argc: num of arguments passed.
 * @argv: pointer to array contain names of arguments passed.
 * Return: 0 if success, non-zero failed.
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
