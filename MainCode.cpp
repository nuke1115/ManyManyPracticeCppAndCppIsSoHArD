#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{

	//char result[3]; 와 char result[3] = ""; 이것과의 차이
	//strcat과 strcpy의 차이 찾기

	//std::cout 과 printf() 의 차이
	//스트림과 버퍼란?
	//그리디 알고리즘이란?
	// & 와 addressof 의 차이

	int a = 10;

	int* aPtr = &a;

	int* aPtr2 = addressof(a);


	std::cin >> a;

	std::cout << a <<endl;
	
	*aPtr = 20;

	std::cout << a << endl;

	*aPtr2 = 30;

	std::cout << a << endl;


	return 0;
}

//c++의 char 는 c#의 byte와 비슷함
//c++에서는 문자,숫자 다 되면, c#에선 오로지 문자만 되고, 숫자는 byte로 나뉨