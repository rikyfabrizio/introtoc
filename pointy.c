#include <stdio.h>

int main(int argc, const char *argv[])
{
	int a = 2;
	int *p = &a;
	int c[50] = {2, 0};

	int *array_p;

	printf("adress of a = %p\n", p);
	printf("adress of p = %p\n", &p);
	printf("wow, %d = %d\n", *p, a);

	array_p = c;

	printf("start of the array %p\n", c);
	printf("pointer array %p\n", array_p);
	printf("%d\n", c[2]);
	return 0;
}
	

