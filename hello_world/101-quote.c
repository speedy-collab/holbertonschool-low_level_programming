#include <unistd.h>
/**
* main - Entry point
* Description: This program prints a specific message to the standard error
* followed by a new line, then returns 1.
* Return: 1 (Failure)
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}

