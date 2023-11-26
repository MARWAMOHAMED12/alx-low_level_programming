#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>

int _Putchar(char c);
void _puts(char *str);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_calloc(unsigned int nmemb, unsigned int size);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int _atoi(const char *s);
void print_int(unsigned long int n);

#endif
