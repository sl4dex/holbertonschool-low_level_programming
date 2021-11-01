#ifndef DOG

#define DOG
/**
 * struct dog - creating doggo c:
 * @name: name of dog
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Dogs are good boys
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
