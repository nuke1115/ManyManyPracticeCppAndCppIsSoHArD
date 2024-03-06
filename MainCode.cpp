#include <stdio.h>
#include <iostream>
#include "TestH.h"

void pointerBasic();
void PrintPractice(int a);

int main()
{
	TestStruct tests;
	TestStruct tests2;
	printf("%d\n%d\n",tests.a,tests2.a);

	tests.a = 100;


	printf("%d\n%d\n", tests.a, tests2.a);


	return 0;
}

void TestPrint(int a, int b)
{
	printf("%d\n%d\n",a,b);
}

















void pointerBasic()
{
	int a = 10;

	int* b = NULL;

	

	b = &a;

	printf("pointer %d\n original %d\n ", *b, a);

	*b = 100;

	printf("after pointer %d\n", a);
}

void PrintPractice(int a)
{
	printf("%d\n" , a);
	
	std::cout << "Hello " << std::endl;
	std::cout << "Hello " << a << std::endl;


}
