#include "main.h"

/*
 * _strcat concatenates two strings but inputs number od strings
 * @dest: string to be apended upon 
 * @strc:string to be completed at the end of the dest
 * @n:integers parameter to compare index to
 * Retirn returns new concatenate 
 */

char *_strncat(char *dest, char *src, int n)
{

		int index = 0, dest_len = 0;

		while (dest[index++])
		dest_len++;

		for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

		return (dest);

}
