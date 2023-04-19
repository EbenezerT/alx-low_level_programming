#ifndef _STRUCT_H
#define _STRUCT_H

/**
 * struct dog - dog details
 * @name: the name of the dog
 * @age: the age
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);





#endif
