#include <stdio.h>

/**
  * main - a program to prints all possibble different combinations
  *
  * Return: Always return 0
  */

int main(void)
{
	int f;
	int s;

	f = 48;
	s = 48;

	while (f < 58)
	{
		s = 48;
		while (s < 5)
		{
			if (f != s && f < s)
			{
				putchar(f);
				putchar(s);
				if (s == 57 && f == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			s++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
