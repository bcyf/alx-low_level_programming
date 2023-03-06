#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area
 * @n: char dest
 * @src: char scr
 * @dest: char v
 *
 *Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr_dest = dest;
	char *ptr_src = src;

	while (n--)
	{
	*ptr_dest++ = *ptr_src++;
	}
	return (dest);
}
