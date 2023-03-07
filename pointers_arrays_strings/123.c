#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a=0, b=0;

	for (; s[a] != '\0';a++)
	{
		for (; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
			break;
			}
		}
	if (!accept[b])
		{	
			break;
		}
	}
	return (a);
}
