#include <stdio.h>
/**
 * * main - print if the number is postive, zero, or negative
 * *
 * * Description: using the main function
 * * this prints the lowercase alphabet in reverse, followed by a new line
 * * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
