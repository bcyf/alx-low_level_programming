#include  "main.h"
/**
 * _isalpha - checks for alphabetic character
 * Return: 0
 * @c: checks for alphabetic character
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
