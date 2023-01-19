#ifndef _HEADER_
#define _HEADER_

/**
 * struct dog - Dog attributes.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 *
 * Description: The atrributes of a dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for dog structur
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
