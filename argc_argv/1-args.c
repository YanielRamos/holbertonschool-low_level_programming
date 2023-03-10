#include <stdio.h>

/**
 * main - program that prints the number of arguments
 *
 *
 * Return: 0 succesful
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return 0;
}
