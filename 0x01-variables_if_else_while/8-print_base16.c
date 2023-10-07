#include <stdio.h>

/**
 * main prints all the numbers of base 16 in lowercase,
 * followed by new line
 * Return: Always 0 on (Success)
 */
int main(void)
{
	int num;
	char ce;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (ce = 'a'; ce <= 'f'; ce++)
	{
		putchar(ce);
	}
	putchar('\n');
	return (0);
}
