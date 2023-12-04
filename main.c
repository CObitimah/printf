#include "main.h"

/**
 * main - main function to test
 *
 * Return: 0 success
 *
 */
int main(void)
{
	int len;
	int len2;
	
	len = _isprintf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");

	printf("Return value of _isprintf: %d\n", len);
	printf("Return value of printf: %d\n", len2);

	return (0);
}