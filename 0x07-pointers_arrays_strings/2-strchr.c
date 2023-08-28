#include "main.h"

/**
 * *_strchr - fille memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: pointer to %
*/

char *_strchr(char *s, char c)
{
	int itr;

	for (itr = 0; s[itr] >= '\0' ; itr++)
	{
		if (s[itr] == c)
		{
			return (s + itr);
		}
	}

	return ('\0');
}
