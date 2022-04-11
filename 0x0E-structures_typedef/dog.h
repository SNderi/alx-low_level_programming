#ifndef _DOG_
#define _DOG_
/**
 *struct dog - Dog structure.
 *@name: name of the dog
 *@age: dog's age
 *@owner: dog's owner name
 **/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

#endif /* _DOG_ */
