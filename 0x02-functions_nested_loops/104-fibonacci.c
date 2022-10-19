#include <stdio.h>

/**
 *  main - Prints the first 98 Fibonacci numbers
 *
 *  Return: Always 0.
 */
int main(void)
{
	int c, boolean, boolean2;
	long int n1, n2, fn, fn2, n11, n22;

	n1 = 1;
	n2 = 2;
	boolean =  boolean2 = 1;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 96; c++)
	{
		if (boolean)
		{
			fn = n1 + n2;
			printf(", %ld", fn);
			n1 = n2;
			n2 = fn;
		}
		else
		{
			if (boolean2)

