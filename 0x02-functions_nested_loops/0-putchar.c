#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int mai(void)
{
	char *sh = "main";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	_putchar('\n');

	return (0);
}
