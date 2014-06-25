#include <stdio.h>


float div(int a, int b)
{
	return a / b;
}

double avg(int a, int b)
{
	return (a + b) / 2;
}

int main(int argc, const char *argv[])
{
	
	int x;
	int y;
	char a;
	double result;



	printf("please enter two numbers:\n");
	scanf("%d %d", &x, &y);
	printf("average or divide?\n");
		do
		{
		
	
			scanf(" %c", &a);
	
	
			if(a == 'y'){
			result = avg(x, y);
			}
			if(a == 'x'){
			result = div(x, y);
			}
			printf("result is %lf\n", result);
		} 
			while(a == 'x' || a == 'y' || a != 'e');

	return 0;
}
