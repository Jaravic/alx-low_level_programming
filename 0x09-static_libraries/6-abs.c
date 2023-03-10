<<<<<<< HEAD
#include <stdio.h>
#include "main.h"

/**
 * _abs - function declaration
 * @n: integer to test
 * Description: convert number to absolute
 * Return: void
 */

int _abs(int n);

/**
 * _abs - function definition
 * @n: integer that will be tested
 * Description: convert and print number absolute
 * Return: void
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (n);
	}
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _abs(int n)
{
    return abs(n);
>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
}
