#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: address of memory to fill
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to the memory area
 */


char *_memset(char *s, char b, unsigned int n)
{
	int i;
	for (i = 0; i < n; i++)
{
	s[i] = b;
	n--;
}
	return (s);
}
