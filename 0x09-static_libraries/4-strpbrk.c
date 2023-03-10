#include "main.h"
<<<<<<< HEAD

/**
 * *_strpbrk - function declaration
 * @s: string to search
 * @accept: bytes to search
 * Return: pointer or NULL
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strpbrk - function definition
 * @s: the string to be searched
 * @accept: bytes to search for
 * Description: searches for a string of a set of bytes
 * Return: pointer to matched byte or NULL if no match
 */

char *_strpbrk(char *s, char *accept)
{
	int str_index;
	int sub_str_index;

	for (str_index = 0; s[str_index] != '\0'; str_index++)
	{
		for (sub_str_index = 0; accept[sub_str_index] != '\0'; sub_str_index++)
		{
			if (s[str_index] == accept[sub_str_index])
			{
				return (s + str_index);
			}
		}
	}
	return (0);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strpbrk(char *s, char *accept)
{
    return strpbrk(s, accept);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
