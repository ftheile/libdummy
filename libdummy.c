#include <stdio.h>

void printstring(const char* str)
{
	printf("String: \"%s\"\n", str);
}

void _init(void)
{
	printf("Inside _init()\n");
}

void _fini(void)
{
	printf("Inside _fini()\n");
}
