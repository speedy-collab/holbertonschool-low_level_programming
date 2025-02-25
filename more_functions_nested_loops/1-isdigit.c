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

/**
 * main - Test the _isdigit function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    /* Test the function using _putchar */
    if (_isdigit('5'))
    {
        _putchar('1');  /* Should print 1 if it's a digit */
    }
    else
    {
        _putchar('0');  /* Should print 0 if it's not a digit */
    }

    _putchar('\n');  /* Print newline */

    if (_isdigit('a'))
    {
        _putchar('1');  /* Should print 1 if it's a digit */
    }
    else
    {
        _putchar('0');  /* Should print 0 if it's not a digit */
    }

    _putchar('\n');  /* Print newline */

    return (0);
}

