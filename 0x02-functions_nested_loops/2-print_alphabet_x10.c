#include"main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet
 *
*/

void print_alphabet_x10(void)
{
	char ch = 'a';

	for (int line = 1; line <= 10; line++)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
}
