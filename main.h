#ifndef MAIN_H
#define MAIN_H
#include<stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _putstr(char *str);
void print_all(char c, va_list arg, int *len);
void print_number(int number, int *len);
void print_binary(unsigned int number, int *len);
void print_unsigned_number(unsigned int number, int *len);
void print_octal_number(unsigned int number, int *len);
void print_hex_number(unsigned int number, char c, int *len);
int _putchar_buff(char c);
void print_string(char *str, int *len);


#endif
