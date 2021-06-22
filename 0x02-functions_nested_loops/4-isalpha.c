#include "holberton.h"
/**
 * is_lettet_uppercase_or_lower_case - To check is it latter
 * Return 1 or 0
 */
int _isalpha(int c)
{

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return 1;
	else
		return 0;
}
