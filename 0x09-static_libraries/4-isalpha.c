<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if in alphabet
 * @c: arguement as integer
 * Description: check if c is in alphabet
 * Return: void
 */

int _isalpha(int c);

/**
 * _isalpha - test if c is in alphabet
 * @c: the arguement to be tested, is integer
 * Description: tests is c is in alphabet
 * Return: void
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _isalpha(int c)
{
    return isalpha(c);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
