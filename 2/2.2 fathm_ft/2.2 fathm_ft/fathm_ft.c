#include <stdio.h>
int main (void)
{
	int feet, fathoms;
	fathoms = 2;
	feet = 6 * fathoms;
	printf ("%d   %d\n", feet, fathoms);
	printf ("%d\n", 6 * fathoms);
	return 0;
}