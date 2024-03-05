#include <stdio.h>
#include <iostream>

void pointerBasic();
void PrintPractice(int a);
struct TestStruct
{
	int c = 10;
	float d = 0.1;
};

int main()
{
	//TestStruct teststruct;
	//printf("%d\n %f",teststruct.c, teststruct.d);

	pointerBasic();


	return 0;
}

void pointerBasic()
{
	int a = 10;

	int* b = NULL;

	b = &a;

	printf("pointer %d\n original %d\n ", *b, a);

	*b = 100;

	printf("after pointer %d\n", a);

	delete b;
}

void PrintPractice(int a)
{
	printf("%d\n" , a);
}

