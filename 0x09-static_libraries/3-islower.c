<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * _islower - tests if lower or uppercase
 * @c: character passed as integer
 * Description: c is passed  as an arguement
 * Return: void
 */

int _islower(int c);

/**
 * _islower - tests c if lower or upper
 * @c: character is passed as integer
 * Description: c is the arguement as integer
 * Return: void
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
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

int _islower(int c)
{
    return (c >= 'a' && c <= 'z');
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
