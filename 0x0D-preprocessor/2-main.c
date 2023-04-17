#include <stdio.h>
#include <stdlib.h>
#define __FILE__

/** 
 * main - prints the name of the file it was compiled from
 * followed by a new line
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);

	return (0);
}
