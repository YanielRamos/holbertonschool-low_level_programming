#include <stdio.h>

/**
 * main - program that prints the number of arguents
 *
 *
 * Return: 0 for succes
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);
	return 0;
}
