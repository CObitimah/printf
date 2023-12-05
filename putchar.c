#include "main.h"

/**
 * _putchar - character c to stdout
 * @m: character to print
 * Return: (1) success otherwise -1 error
 */

int _putchar(char m)
{
	return (write(1, &m, 1));
}
