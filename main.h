#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int _putchar(char c);
int _printf(const char *format, ...);
int putss(char *c);
int printf_c(void);
int print_dec(va_list args);
int print_int(va_list args);

#endif
