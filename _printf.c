#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - a function that prints exactly like printf
 * @format: the of the function
 * Return: args
 */
int _printf(const char *format, ...)
{
	int count = 0;

	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
		{
			putchar(*format);
			count++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				count += _percent();
			}
			else if (*format == 'c')
			{
				count += _char(args);
			}
			else if (*format == 's')
			{
				count += _string(args);
			}
			else if (*format == 'd' || *format == 'i')
			{
				count += print_num(args);
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
