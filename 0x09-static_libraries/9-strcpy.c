#include "main.h"
<<<<<<< HEAD
#include "2-strlen.c"

/**
 * _strcpy - function declaration
 * @dest: destination to copy
 * @src: source to copy
 * Return: destination
 */

char *_strcpy(char *dest, char *src);

/**
 * _strcpy - function declaration
 * Description: copies a string
 * @dest: destination to copy to
 * @src: source to copy from
 * Return: destination
 */

char *_strcpy(char *dest, char *src)
{
	int index;

	for (index = 0; index <= _strlen(src); index++)
	{
		dest[index] = src[index];
	}
	return (dest);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char *_strcpy(char *dest, char *src)
{
    return strcpy(dest, src);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
