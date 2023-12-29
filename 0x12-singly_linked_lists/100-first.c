#include <stdio.h>

void __attribute__((constructor))statement(void);

/**
 * statement - function to print statement
 * Return:nothing
 */

void statement(void)
{
	char *m;

	m = "You're beat! and yet, you must allow,\nI bore my house upon my back!\n";
	printf("%s", m);
}
