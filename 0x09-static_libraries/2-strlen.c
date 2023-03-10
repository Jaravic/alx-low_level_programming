#include "main.h"
<<<<<<< HEAD

/**
 * _strlen - function declaration
 * Description: find length of a string
 * @s: the string ptr
 * Return: index
 */

int _strlen(char *s);

/**
 * _strlen - function definition
 * Description: checks string length
 * @s: the string pointer
 * Return: index
 */

int _strlen(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{}
	return (index);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _strlen(char *s)
{
    return strlen(s);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
