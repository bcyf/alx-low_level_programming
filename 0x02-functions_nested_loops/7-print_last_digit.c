#include "main.h"
/**
 * print_last_digit - what we so with them.
 * @n: There are only 3 colors, 10 digits,
 * and 7 note; it's what we do with themthat's importance.
 * Return: 0
 */

int print_last_digit(int n)
{
	int last_num = n % 10;

	if (last_num < 0)
	{
		last_num = last_num * -1;
	}
	_putchar(last_num + '0');
	return (last_num);
}

