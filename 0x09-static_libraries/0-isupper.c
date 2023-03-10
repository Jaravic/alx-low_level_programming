#include "main.h"
<<<<<<< HEAD

/**
 * _isupper - function declaration
 * Description: check case of c
 * @c: character to test
 * Return: 1 for true and 0 for false
 */

int _isupper(int c);

/**
 * _isupper - function definition
 * Description: tests case of c
 * @c: character to test
 * Return: 1 if upper 0 if not upper
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isupper(int c)
{
    return (c >= 'A' && c <= 'Z');
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
