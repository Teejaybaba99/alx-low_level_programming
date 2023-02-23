#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int a = 0;

	while (a <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	}
	_putchar('\n');
}
