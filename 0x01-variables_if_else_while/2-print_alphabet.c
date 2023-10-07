#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char cr;

	for (cr = 'a'; cr <= 'z'; cr++)
	{
		putchar(cr);
	}
	putchar('\n');
	return (0);
}
