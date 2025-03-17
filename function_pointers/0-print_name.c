#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - Prints a name using a callback function
* @name: The name to be printed
* @f: A pointer to a function that takes a char * as an argument
*
* Description: This function takes a name and a pointer to a function,
* and it uses the function pointer to print the name in a specific way.
*/
void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;

f(name);
}
