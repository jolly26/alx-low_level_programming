#include "main.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_array(int *a, int n)
{

	*a = &n;
	_putchar(n);
	printf(&n);
	return (0);
}
