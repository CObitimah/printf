#include "main.h"

/**
 * print_number - prints integer
 * @args: argument print
 * Return: number of printed characters
 */
int print_number(va_list args)
{
	int num;
	int digit;
	int length;
	unsigned int number;

	num = va_arg(args, int);
	digit = 1;
	length = 0;

	if (num < 0)
	{
		length += _putchar('-');
		number = num * -1;
	}
	else
		number = num;
	for (; number / digit > 9; )
		digit *= 10;
	for (; digit != 0; )
	{
		length += _putchar('0' + number / digit);
		number %= digit;
		digit /= 10;
	}
	return (length);
}

/**
 * print_unsgined_number - print unsigned number
 * @num: arguments print
 * Return: number of printed characters
 */
int print_unsgined_number(unsigned int num)
{
	int length;
	int digit;
	unsigned int number;

	digit = 1;
	length = 0;
	number = num;

	for (; number / digit > 9; )
	{
		digit *= 10;
	}
	for (; digit != 0; )
	{
		length += _putchar('0' + number / digit);
		number %= digit;
		digit /= 10;
	}
	return (length);
}

/**
 * print_int - print integers
 * @args: argument printed
 * Return: number of printed characters
 */
int print_int(va_list args)
{
	int result;

	result = print_number(args);
	return (result);
}
