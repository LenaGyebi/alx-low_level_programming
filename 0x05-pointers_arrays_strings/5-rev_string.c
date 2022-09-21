#include <stdio.h>
#include "main.h"

/**
 * rev_string - reversing a string
 * @s - string to be reversed
 * return 0
 */

void rev_string(char *s)
{
		int i, tmp, len = _strlen(s);

		for (i = 0; i < len / 2; i++)
		{
			
		tmp = *(s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i - 1) = tmp;

		}
}

/**
 * strlen - returns the string length
 * @s: string 
 * return - length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')	
	len++;

	return (len);
}
