#include <stdio.h>

/**
 * main - entery of program
 * @c: character to check if its upper
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
