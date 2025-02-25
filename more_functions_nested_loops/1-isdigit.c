#include <stdio.h>
/**
* _isdigit - Checks if the character is a digit (0-9)
* @c: The character to check
*
* Return: 1 if c is a digit, 0 otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}

int main(void)
{
/* Test the function */
printf("%d\n", _isdigit('5'));/* Should print 1 */
printf("%d\n", _isdigit('a'));/* Should print 0 */
return (0);
}
