#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - describes the dog
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int main(void)
{
	struct dog dog;
	return (0);
}

/**
 * typedef dog_t - defines the new name for type struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
