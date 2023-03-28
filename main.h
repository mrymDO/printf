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
void print_adress(unsigned long i, char *s, int *len);
void rev_print(char *str, int *len);
void rot(char *str, int *len);
void print_plus(int num, int *len);
void print_space(int num, int *len);
void print_prefix(int num, char c, int *len);

#endif
