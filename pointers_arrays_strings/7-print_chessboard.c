#include <stdio.h>

/**
* print_chessboard - prints the chessboard.
* @a: a 2D array representing the chessboard.
*
* Description: This function prints the chessboard, represented by
*              an 8x8 array of characters, one row per line.
*/
void print_chessboard(char (*a)[8])
{
unsigned int i, j;

for (i = 0; i < 8; i++)
{
for (j = 0; j < 8; j++)
{
putchar(a[i][j]);  /* Print each character in the 2D array */
}
putchar('\n');  /* Print a newline after each row */
}
}
