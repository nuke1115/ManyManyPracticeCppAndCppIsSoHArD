#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>



int main()
{
	char a[11];
	char b[11];

	scanf("%s" , a);
	printf("%s" , a);

	scanf_s("%s" , b);
	printf("%s" , b);


	//scanf�� scanf_s�� ����
	//�׸��� �� �� �ڵ忡���� ������ ����

	return 0;
}