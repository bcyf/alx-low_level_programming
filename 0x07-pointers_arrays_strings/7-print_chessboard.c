#include "main.h"
#include <stdio.h>
/**
 * print_chessboard -  function that prints the chessboard.
 * @a: char
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	char c = a[i][j];
	putchar(c);
	putchar(' ');
	}
	putchar(10);
	}
}
