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

/**
 * typedef dog_t - defines the new name for type struct dog
 */
typedef struct dog dog_t;

#endif
