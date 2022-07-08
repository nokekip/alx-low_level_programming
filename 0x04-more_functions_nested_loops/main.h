#ifndef _MAIN_H
#define _MAIN_H


/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * _isupper - Check for uppercase characters
 *
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isupper(int c);

/**
 * _isdigit - Check for uppercase characters
 * @c: integer
 * Return: 1 (Success) 0 (Otherwise)
 */

int _isdigit(int c);

/**
 * mul - Entry point
 * @a: interger
 * @b: integer
 *
 * Return: a x b
 */
int mul(int a, int b);

/**
 * print_numbers - print 0 - 9
 *
 * Return: void
 */

void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);
void print_square(int size);
void print_square(int size);
void print_triangle(int size);
void print_number(int n);

#endif /* main.h */
