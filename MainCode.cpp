#include <stdio.h>
#include <iostream>


void pointerBasic();
void PrintPractice(int a);

int main()
{


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
