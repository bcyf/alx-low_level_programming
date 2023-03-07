#include "main.h"
#include <stdio.h>
/**
 * _strpbrk -  searches a string for any of a set of bytes.
 * @s: char p
 * @accept: char u
 *
 * Return 0
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *p = accept;

	while (*p != '\0')
	{
	if (*s == *p)
	{
	return (s);
	}
	p++;
	}
	s++;
	}
	return (NULL);
}
