#include <stdio.h>
#include <iostream>
using namespace std;


int main()
{

	//char result[3]; �� char result[3] = ""; �̰Ͱ��� ����
	//strcat�� strcpy�� ���� ã��

	//std::cout �� printf() �� ����
	//��Ʈ���� ���۶�?
	//�׸��� �˰����̶�?
	// & �� addressof �� ����

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

//c++�� char �� c#�� byte�� �����
//c++������ ����,���� �� �Ǹ�, c#���� ������ ���ڸ� �ǰ�, ���ڴ� byte�� ����