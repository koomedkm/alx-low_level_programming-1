#include <stdio.h>

#define _FILE_

/**
 * main - prints the name of
 * the file it was compiled
 * from followed by a new 
 * line
 *
 * Return: 0
 */

int main()
{
	printf("%s\n", _FILE_ );
	return (0);
}
