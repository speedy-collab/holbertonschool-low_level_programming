#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* main - Adds positive numbers and prints the result
* @argc: The number of command line arguments
* @argv: An array of strings (command line arguments)
*
* Return: 0 if successful, 1 if error
*/
int main(int argc, char *argv[])
{
int i, num, sum = 0;

for (i = 1; i < argc; i++)
{
for (int j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
}
printf("Error\n");
return (1);
}
}

num = atoi(argv[i]);
sum += num;
}

printf("%d\n", sum);

return (0);
}
