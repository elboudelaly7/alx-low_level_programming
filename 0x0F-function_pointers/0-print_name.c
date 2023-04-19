#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - elmahdi el boudelaly
 * @name: anubis
 * @f: my age
 * Return: nothing
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
