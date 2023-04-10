#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the minimun number of coins
 * to make an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1 in Error otherwise 0
 */

int main(int argc, char *argv[])
{
	int num = atoi(argv[1]);
	int i, result = 0 ;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	else if (num >= 0)
	{
		for (i = 0; i < 5; i++)
		{
			while (num >= coins[i])
			{
				result++;
				num -= coins[i];
			}
		}

		printf("%d\n", result);
	}

	return (0);
}
