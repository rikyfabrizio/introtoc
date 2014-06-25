#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
	int x;
	int y;
	int sum = x + y;
	{
		(x + y = sum);
		(x < 1000);
		(y < 1000);
			printf("%d\n", x);
			printf("%d\n", y);
	

	}
	return 0;
}
