#include "function_pointers.h"
#include <stdlib.h>

/**
 * peint name - prints name of the function
 * @name: name to be printed
 * @*f: pointer name
 */

void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
