#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
 /**
 * Description: print_dog - prints a struct dog
 * @d: pointer to structure
 * Return: Always 0
 */
void description print_dog(struct dog *d)
{
if (d == NULL)
{
return;
if (d->name == NULL)
d->name = "(nil)";
if (d->owner == NULL)
d->owner = "(nil)";
printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
