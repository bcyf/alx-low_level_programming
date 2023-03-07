#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char
 * @accept: char
 *
 * Return: o
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s)
	{
	p = accept;
	while (*p)
	{
	if (*s == *p)
	{
	len++;
	break;
	}
	p++;
	}
	if (!*p)
	{
	return (len);
	}
	s++;
	}
	return (len);
}
