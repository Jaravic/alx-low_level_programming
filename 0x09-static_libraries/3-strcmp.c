#include "main.h"
<<<<<<< HEAD

/**
 * _strcmp - Compares pointers to two strings.
 * @s1: A pointer to the first string to be compared.
 * @s2: A pointer to the second string to be compared.
 *
 * Return: If str1 < str2, the negative difference of
 * the first unmatched characters.
 *         If s1 == s2, 0.
 *         If s1 > s2, the positive difference of
 *         the first unmatched characters.
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _strcmp(char *s1, char *s2)
{
    return strcmp(s1, s2);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
