#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, a[50];

	for (i = 0; i < 50; i++) {
		*(a + i) = (i % 2 == 0)? 2 : 0;
		printf("%d, ", *(a + i));
	}
	printf("%d\n");
	return 0;

}
