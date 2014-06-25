#include <stdio.h>

int main(int argc, const char *argv[])
{
	int i, arr[3][3];
	int j;


	for (i = 0; i < 3; i++) {
		*(*(arr + i) + j);
	}
	for (j = 0; j < 3; j++) {
		*(*(arr + i) + j);
	}
	return 0;
}
