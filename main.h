#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdio.h>
/**
 * struct print - structure for printing various types
 * @type: type to print
 * @function: function to print
 */
 
typedef struct print
{
	char *type;
	int (*function)(va_list);
} print_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
#endif
