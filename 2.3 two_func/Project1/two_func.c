//two_func.c 一个文件中包含两个函数
#include <stdio.h>
void butler(void);
int main(void)
{
	printf("Is \n");
	butler();
	printf(" man.\n");

	return 0;
}

void butler(void)
{
	printf("I am\n");
}