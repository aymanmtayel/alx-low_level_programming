#ifndef DOG
#define DOG

/**
 *struct dog - stores dog's information
 *@name: name of the dog
 *@age: age of the dog
 *@owner: owner of the dog
 */

typedef struct dog dog_t;

struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
