#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	char ch;
	printf("P\n");
	scanf("%c", &ch);
	printf("%c,%d\n", ch, ch);

	return 0;
}