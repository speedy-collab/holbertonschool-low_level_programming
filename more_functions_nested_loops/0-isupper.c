#include <stdio.h>

int _isupper(int c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return 1; // Return 1 if c is an uppercase letter
    }
    return 0; // Return 0 otherwise
}

int main() {
    // Test the function with some examples
    printf("%d\n", _isupper('A')); // Should return 1
    printf("%d\n", _isupper('z')); // Should return 0
    printf("%d\n", _isupper('M')); // Should return 1
    printf("%d\n", _isupper('5')); // Should return 0

    return 0;
}
