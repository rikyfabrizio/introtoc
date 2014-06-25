#include <stdlib.h>
#include <stdio.h>

int s[16];

void swap(x , y)
{
	int temp;

	temp = s[y];
	s[y] = s[x];
	s[x] = temp;
}


int main(int argc, const char *argv[])
{
	int students = 16;
	int i;
 	int numero1, numero2;

	srand(time(NULL));
	for(i = 0; i < students; i++){
		s[i] = i;
	}

 	for(i = students; i > 0; i--) {
		numero1  = rand() % i;
		numero2 = i - 1;
		swap(numero1, numero2);
	}

	for(i = 0; i < students; i++)
		printf("%d\n", s[i]);


	return 0;
}
