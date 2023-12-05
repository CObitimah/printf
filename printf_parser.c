#include "main.h"
/**
 * parser - parse the format specifier
 * @format: format specifier
 * @funct_list: string array
 * @args: arguments
 * Return: char
 */
int parser(const char *format, custom_conver_t funct_list[], va_list args)
{
	int a, b, x;
	int printchar;

	printchar = 0;
	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%')
		{
			for (b = 0; funct_list[b].id != NULL; b++)
			{
				if (format[a + 1] == funct_list[b].id[0])
				{
					x = funct_list[b].f(args);
					if (x == -1)
						return (-1);
					printchar += x;
					break;
				}
			}
			if (funct_list[b].id == NULL && format[a + 1] != ' ')
			{
				if (format[a + 1] != '\0')
				{
					_putchar(format[a]);
					_putchar(format[a + 1]);
					printchar = printchar + 2;
				}
				else
					return (-1);
			}
			a = a + 1;
		}
		else
		{
			_putchar(format[a]);
			printchar++;
		}
	}
	return (printchar);
}
