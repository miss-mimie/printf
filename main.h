#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/* Function prototypes */
/* Printf function */
int _printf(const char *format, ...);

/* Writes to stdout */
int _putchar(char c);
int _puts(const char *str);

/* Prints numbers */
int print_integer(int j);

#endif
