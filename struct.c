#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR 60

struct employee{
	char name[MAX_CHAR];
	char lastname[MAX_CHAR];
	int slary;
	
};

struct employee *create_employee(char *name, char *lastname, int salary)
{
	struct emloyee *emp = NULL;

	emp = (struct employee *) malloc(sizeof(struct employee));

	printf("please input name\n");
	scanf("%s", name);
}

main(int argc, const char *argv[])
{
	int x;
	struct employee *list = NULL;

	printf("1 = new or 2 = access database\n");
	printf("type 0 to exit\n");
	scanf("%d", &x);
	switch(employee);{
		case 0 : x = 0;
			printf("GoodBYe\n");
			break;
		case 1 : x = 1;
			printf()
			break;
		case 2 : x = 2;
			break;
	}			
;
}
