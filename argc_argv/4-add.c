#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that adds positive numbers
 * @argc: counter
 * @argv: vector
 * Return: 0 succesful
 */

int main(int argc, char *argv[])
{
	int i;
	int n;
	int result = 0;
	int c;


	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		n = atoi(argv[i]);

		for (c = 0; argv[i][c] != '\0'; c++)
		{
			if (argv[i][c] < '0' || argv[i][c] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		if (n <= 0)
		{
			printf("Error\n");
			return (1);
		}
		result += n;
	}
	printf("%d\n", result);
	return (0);
}
