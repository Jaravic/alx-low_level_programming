#include "main.h"
<<<<<<< HEAD

/**
 * _memset - fill a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
    return memset(s, b, n);
}
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
