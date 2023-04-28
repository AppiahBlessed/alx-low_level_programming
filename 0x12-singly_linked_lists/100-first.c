#include "lists.h"
#include <stdio.h>
void before_main(void) __attribute__((constructor));
/**
 *before_main - Runs before the main function is executed
 *
 *
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");

}
/**Constructor functions are functions*/
/*that are automatically executed by the */
/*C runtime system before the main function is executed.*/
