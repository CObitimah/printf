#include "main.h"

/**
 * print_char - prints char
 * @args: arguments
 * Return: 1
 */
int print_char(va_list args)
{
	char str;

	str = va_arg(args, int);
	_putchar(str);
	return (1);
}

/**
 * print_string - print string
 * @args: arguments
 * Return: string length
 */
int print_string(va_list args)
{
	int i;
	const char *s;

	s = va_arg(args, const char *);

	if (s == NULL)
		s = "(null)";

	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}

/**
 * print_percent - prints char 37
 * @args: arguments
 * Return: (1)
 */
int print_percent(__attribute__((unused)) va_list args)
{
	_putchar('%');
	return (1);
}
