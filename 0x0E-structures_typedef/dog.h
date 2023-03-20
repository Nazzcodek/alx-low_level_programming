#ifndef DOG_H_
#define DOG_H

/**
 * struct Dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */

struct Dog
{
	char *name;
	float age;
	char *owner;
}

/*
 * dog_t - new dog structure
 */

typedef struct Dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
