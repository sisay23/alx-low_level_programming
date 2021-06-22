#include "holberton.h"
/**
 *print alphabet 10X
 */
void print_alphabet_x10(void)
{
	int count;
	int alphabet;
	for (count  = 0; count < 10; count++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
