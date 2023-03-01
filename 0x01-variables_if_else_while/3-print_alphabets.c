#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: print the alphabet in lowercase
 * and in uppercase follwed by a new line
 * Return: 0
 */

int main(void)

{

	char c = 'a';

	while (c <= 'z')

	{
		putchar(c);
		c++;
	}
	 c = 'A';

	while (c <= 'Z')

		putchar (c);
		c++;

		putchar ('\n')
		return (0);
}
