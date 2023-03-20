#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure of the dog header file
 * @name: name
 * @age: age
 * @owner: owner
 */
typedef struct dog dog_t
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
