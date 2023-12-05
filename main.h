#ifndef MAIN_H
#define MAIN_H


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _string(va_list args);
int _char(va_list char);
int _percent(void);
int num_print(int arg);
int num_print(va_list n);


#endif /* _MAIN_H */
