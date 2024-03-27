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


	//scanf와 scanf_s의 차이
	//그리고 위 두 코드에서의 오류의 차이

	return 0;
}