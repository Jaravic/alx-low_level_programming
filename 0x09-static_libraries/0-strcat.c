#include "main.h"
<<<<<<< HEAD

/**
 * _strcat - function declaration
 * @dest: second string
 * @src: first string
 * Return: charcter
 */

char *_strcat(char *dest, char *src);

/**
 * _strcat - function definition
 * Description: concatenates dest and src strings
 * @dest: second string
 * @src: first string
 * Return: character
 */

char *_strcat(char *dest, char *src)
{
	int dest_index;
	int src_index;

	for (dest_index = 0; dest[dest_index] != '\0'; dest_index++)
	{}

	for (src_index = 0; src[src_index] != '\0'; src_index++)
	{
		dest[dest_index + src_index] = src[src_index];
	}
	dest[dest_index + src_index] = '\0';

	return (dest);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strcat(char *dest, char *src)
{
    return strcat(dest, src);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
