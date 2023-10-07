#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by new line, except e and q
 * Return: Aways 0 on (Sucess)
 */
int main(void)
{
	char ck = 'a';

	while (ck <= 'z')
	{
		if (ck != 'e' && ck != 'q')
		{
			putchar(ck);
		}
		ck++;
	}
	putchar('\n');
	return (0);
}
