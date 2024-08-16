#include <stdio.h>
int main(void)
{
	int x = 100;
	printf("%d,%o,%x\a\n", x, x, x);
	printf("%d,%#o,%#x\n", x, x, x);
	return 0;
}
/*
100, 144, 64
100, 0144, 0x64
*/