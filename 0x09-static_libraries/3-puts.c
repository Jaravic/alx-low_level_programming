#include "main.h"
<<<<<<< HEAD

/**
 * _puts - function declaration
 * @str: string pointer
 * Return: void
 */

void _puts(char *str);

/**
 * _puts - function definition
 * Description: prints a string
 * @str: the string pointer
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void _puts(char *s)
{
    puts(s);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
