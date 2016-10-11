#include<stdio.h>

typedef struct Person
{
	char name[20];
	int age;
	float salary;
};

int main()
{
	struct Person personList[2];
	int i;

	for (i = 1; i <= 2; ++i)
	{
		printf("enter name of person number %d\n", i);
		scanf("%s", personList[i].name);
	}

	printf("The entered person data is \n\n");

	for (int j = 1; j <= 2; ++j)
	{
		printf("%s\t", personList[j].name);
	}

	return 0;
}
