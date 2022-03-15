#include <unistd.h>
#include "main.h"
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	char c[9] = "_putchar\n";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	return (0);
}
