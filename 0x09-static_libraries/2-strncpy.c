#include "main.h"
<<<<<<< HEAD

/**
 * *_strchr - function declaration
 * @s: the string
 * @c: the character
 * Return: a character
 */
char *_strchr(char *s, char c);

/**
 * *_strchr - function definition
 * @s: the string to be searched
 * @c: the character to find
 * Description: finds a character in a string
 * Return: a character value
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	if (s[index] == c)
	{
		return (s + index);
	}
	return (0);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strncpy(char *dest, char *src, int n)
{
    return strncpy(dest, src, n);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
