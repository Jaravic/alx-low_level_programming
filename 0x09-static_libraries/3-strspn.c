#include "main.h"
<<<<<<< HEAD

/**
 * _strspn - function declaration
 * @s: source string
 * @accept: prefix substring
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept);

/**
 * _strspn - function definition
 * @s: the string to search
 * @accept: the prefic substring to be tested
 * Description: returns number of bytes in s
 * which only has bytes from accept
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}
			else if (accept[index + 1] == '\0')
			{
				return (bytes);
			}
		}
		s++;
	}
	return (bytes);
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

unsigned int _strspn(char *s, char *accept)
{
    return strspn(s, accept);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
