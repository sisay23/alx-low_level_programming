#include "holberton.h"
/**
 * alphabet using _putchar
 * Discription students shouldnt us standard input output 
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
