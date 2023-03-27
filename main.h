#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
void print_all(char c, va_list arg, int *len);
void print_number(int number, int *len);
void print_binary(int number, int *len);


#endif
