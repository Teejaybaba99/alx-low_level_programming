#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * must be seperated by a comma, foolowed by a space
 * Numbers should be in printed order
 * @n: integer to be inputed
 */
void print_to_98(int n)
{
	int count;

	if (n > 98)
		for (count = n; count > 98; --count)
			printf("%d ", count);
	else
		for (count = n; count < 98; ++count)
			printf("%d ", count);
	printf("98\n");
}
