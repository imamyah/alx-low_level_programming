#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 in Success otherwise 1
 */

int main(int argc, char *argv[])
{
	int i;
	int mul = 0;

	if (argc != 3)
		printf("Error\n");

	return (1);

	for (i = 1; i < argc; i++)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}

	return (0);
}
