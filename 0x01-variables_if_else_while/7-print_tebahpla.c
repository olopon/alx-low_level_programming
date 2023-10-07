#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse order
 * followed by new line
 * Return: Always 0 on (Success)
 */
int main(void)
{
	char ce;

	for (ce = 'z'; ce >= 'a'; ce--)
	{
		putchar(ce);
	}
	putchar('\n');
	return (0);
}
