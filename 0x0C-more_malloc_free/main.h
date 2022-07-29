#ifndef _MAIN_H
#define _MAIN_H

#define END '\0'

#define EMPTY ""

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int _putchar(char c);

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: void
 */

void *malloc_checked(unsigned int b);

#endif
