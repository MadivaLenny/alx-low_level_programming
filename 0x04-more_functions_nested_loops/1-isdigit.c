#include "main.h"

/**
 * _isdigit - checks if c is digit between 0 and 9
 * @c: integer to be checked
 * Return: 1 if cis digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
