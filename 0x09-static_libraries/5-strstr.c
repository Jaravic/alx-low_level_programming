#include "main.h"
<<<<<<< HEAD

/**
 * *_strstr - function declaration
 * @haystack: the string to be searched
 * @needle: the substring
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle);

/**
 * *_strstr - function definition
 * @haystack: that string that will be searched
 * @needle: the substring to search for
 * Description: search for needle in haystack
 * Return: string or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int hay_index;
	int needle_index;

	if (needle[0] == '\0')
	{
		return (haystack);
	}

	for (hay_index = 0; haystack[hay_index] != '\0'; hay_index++)
	{
		if (haystack[hay_index] == needle[0])
		{
			for (needle_index = 0; needle[needle_index] != '\0'; needle_index++)
			{
				if (haystack[hay_index + needle_index] != needle[needle_index])
				{
					break;
				}
			}
			if (needle[needle_index] == '\0')
			{
				return (haystack + hay_index);
			}
		}
	}
	return ('\0');
}
=======
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strstr(char *haystack, char *needle)
{
    return strstr(haystack, needle);
}

>>>>>>> 2985d32da96456fa078737e08a8843a2f0b9a83f
