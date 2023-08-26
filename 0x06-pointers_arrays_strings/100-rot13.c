#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
*/

char *rot13(char *s)
{
	int i;

	char rot13[] = "abcdfghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABSDEFGHIJKLM";
	char *ptr = s;

	while (*s)
	{
		for (i = 0; i < 52; i++)
		{
			if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
			{
				if (*s == rot13[i])
				{
					*s = ROT13[i];
					break;
				}
			}
		}
		s++;
	}
	return (ptr);
}