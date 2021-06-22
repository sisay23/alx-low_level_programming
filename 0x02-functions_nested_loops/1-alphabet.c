#include "holberton.h"
/**
 * alphabet using _putchar
 */

void print_alphabet(void)
{

	int alphabet;

	for(alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
             _putchar(alphabet);
	}

	_putchar('\n');
}
