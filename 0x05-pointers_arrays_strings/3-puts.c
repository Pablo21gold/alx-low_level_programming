#include "main.h"

/**
 * _puts - prints string
 * @str: string
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;
	
	while (str[i] != '\0'p)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n')
}


