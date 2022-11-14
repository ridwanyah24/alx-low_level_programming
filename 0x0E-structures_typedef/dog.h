#ifndef DOG_H
#define DOG_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
/**
  *struct dog - data structure for a dog
  *@name: name of dog
  *@age: its age
  *@owner: its owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
