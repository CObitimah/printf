#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * _isprintf - a function that prints exactly like printf
 * @format: the of the function
 * Return: args
 */
int _isprintf(const char *format, ...)
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
			else if (*format == 'a')
			{
				count += _char(arg);
			}
			else if (*format == 'x')
			{
				count += _string(arg);
			}
			else if (*format == 'd' || == 'i')
			{
				count += print_num(arg);
			}
		}
		format++;
	}
	va_end(args);
	return (count);
}
