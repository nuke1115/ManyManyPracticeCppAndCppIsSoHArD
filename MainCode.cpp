
#include <stdio.h>
#include <iostream>
#include <cstring>


int main()
{

	//char result[3]; �� char result[3] = ""; �̰Ͱ��� ����
	//strcat�� strcpy�� ���� ã��


	int* arr = new int[3];


	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;


	printf("%d %d %d" , arr[0], arr[1], arr[2]);

	delete arr;

	int* arr2 = new int[3];


	arr2[0] = 1;
	arr2[1] = 2;
	arr2[2] = 3;


	printf("%d %d %d", arr2[0], arr2[1], arr2[2]);

	free(arr2);

	return 0;
}