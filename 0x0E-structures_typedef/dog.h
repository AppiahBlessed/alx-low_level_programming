#ifndef DOG_H
#define DOG_H
/**
 *struct dog - Template for struct dog
 *@name: Name of dog
 *@age: Age of dog
 *@owner: Who owns the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
