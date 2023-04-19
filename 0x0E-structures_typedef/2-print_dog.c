#include "dog.h"
#include <string.h>
#include <stdio.h>
/**
 *print_dog - Prints dog
 *@d: Member
 *
 *
 *
 */
void print_dog(struct dog *d)
{
	/*Print nothing if d == NULL*/
	if (d == NULL)
	{
		return;
	}
		else
		{
			printf("Name: %s\n", (*d).name ? (*d).name : "(nil)");
			printf("Age: %f\n", (*d).age);/*Use ternary operator*/
			printf("Owner: %s\n", (*d).owner ? (*d).owner : "(nil)");
		}
}
