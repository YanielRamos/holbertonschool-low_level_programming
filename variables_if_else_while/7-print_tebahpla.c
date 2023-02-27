#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Scooby doo pa pa
 * Return: Always (0) (succesful)
 */

int main(void)
{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
