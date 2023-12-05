#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _string(va_list arg);
int _char(va_list Char);
int _percent(void);
int num_print(int args);
int print_num(va_list n);


#endif /* _MAIN_H */
