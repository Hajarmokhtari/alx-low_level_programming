#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all possible different combinations of three digits
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;
	int m, l;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			l = 0;
			while (l <= 9)
			{
				if (n != m &&
					n < m &&
					m != l &&
					m < l)
				{
					putchar(n + 48);
					putchar(m + 48);
					putchar(l + 48);

					if (n + m + l != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				l++;
			}
			m++;
		}
		n++;
	}
	putchat('\n');
	return (0);
}
