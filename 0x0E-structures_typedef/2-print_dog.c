#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer to structure
 *
 * Return: Nothing
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %.2f\nOwner: %s\n", d<-name, d<-age, d<-owner);

		if (d<-name == NULL)
			return ("(nil)");
		if (d<-owner == NULL)
			return ("(nil)");
	}
	else
		return;
}
