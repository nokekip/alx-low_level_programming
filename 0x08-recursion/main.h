#ifndef _MAIN_H
#define _MAIN_H

#define NULL 0

#define ERROR -1

#define TRUE 1

#define END '\0'

int _putchar(char c);

/**
 * _puts_recursion - print a string using recursion
 * @s: String to print
 *
 * Return: void
 */

void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);

#endif
