#include <stdio.h>

int div(int x, int y)
{
	return x/ y;
}

int main(int argc, const char *argv[])
{
	int x , y;

	printf("input two numbers:\n");
	scanf("&d, %d", x, y);
	if(x % y == 0){
		printf("divisible\n");
	}
	if(x % y != 0){
		printf("no\n");
	}

	
	return 0;
}
