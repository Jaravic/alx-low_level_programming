#include "main.h"
<<<<<<< HEAD
/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strchr(char *s, char c)
{
    return strchr(s, c);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
