#include <stdio.h>
/**
 * * main - print if the number is postive, zero, or negative
 * *
 * * Description: using the main function
 * * this program prints a program that prints all single digit numbers of base 10 starting from 0
 * * Return: 0
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
