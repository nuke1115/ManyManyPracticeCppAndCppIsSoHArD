#include <stdio.h>
#include <iostream>

void pointerBasic();



int main()
{



	pointerBasic();


	return 0;
}

void pointerBasic()
{
	int a = 10;

	int* b = &a;

	printf("pointer %d\n original %d\n ", *b, a);

	*b = 100;

	printf("after pointer %d\n", a);
}