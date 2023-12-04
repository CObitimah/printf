#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * num_print - main function
 * @n: input parameter
 * Return: number
 */
int num_print(va_list n)
{
	int num = va_arg(n, int);
	int count = 0;

	count += num_print(num);
	return (count);
}
int num_print(int arg)
{
	int count = 0;
	unsigned int x = arg;

	if (arg < 0)
	{
		putchar('-');
		count++;
		arg *= -1;
		k = arg;
	}
	k /= 10;
	if (k)
		count += num_print(k);
	count += putchar(((unsigned int) arg % 10) + 48);
	return (count);
}
