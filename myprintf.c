#include "main.h"
/**
 * _printf - function that search the correct function
 * @format: format specifier
 * Return: length of string
 */
int _printf(const char *format, ...)
{
	int c;

	custom_conver_t funct_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	c = parser(format, funct_list, args);

	va_end(args);
	return (c);
}
