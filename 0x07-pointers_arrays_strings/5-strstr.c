#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strstr - function that locates a substring.
 * @haystack: char p
 * @needle: char x
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int hlen = strlen(haystack);
	int nlen = strlen(needle);
	int i, j;

	if (nlen > hlen)
	{
	return (NULL);
	}
	for (i = 0; i <= hlen - nlen; i++)
	{
	for (j = 0; j < nlen; j++)
	{
	if (haystack[i + j] != needle[j])
	{
	break;
	}
	}
	if (j == nlen)
	{
	return (haystack + i);
	}
	}
	return (NULL);
}
