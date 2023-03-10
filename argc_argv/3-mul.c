#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers
 * @argc: determines if there more than two arguments
 * @argv: have the arguments to multiply
 * Return: 0 succesful
 */

int main(int argc, char *argv[])
{
	int i;
	int b;
	int result;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	b = atoi(argv[2]);

	if ((result = i * b))
	{
		printf("%d\n", result);
	}
	return (0);
}
