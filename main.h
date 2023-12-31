#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>
#include <unistd.h>

/**
 * struct convert - user defined data
 * @id: string character
 * @f: function pointer
 */
struct convert
{
	char *id;
	int (*f)(va_list);
};
typedef struct convert custom_conver_t;

int _putchar(char m);
int _printf(const char *format, ...);
void _vprintf(const char *format, va_list args);
int parser(const char *format, custom_conver_t funct_list[], va_list args);
int print_char(va_list);
int print_string(va_list args);
int print_percent(va_list);
int print_unsgined_number(unsigned int num);
int print_number(va_list);
int print_int(va_list);


#endif
