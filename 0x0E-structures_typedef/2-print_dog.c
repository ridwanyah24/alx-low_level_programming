#include "dog.h"
/**
  * print_dog - prints the struct of dog
  *@d: the struct dog
  */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
