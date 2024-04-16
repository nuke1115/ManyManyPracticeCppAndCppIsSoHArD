#include <stdio.h>
#include <iostream>
#include <list>
using namespace std;

class Stack
{
private:
	list<int> _internalList;
	

public:
	Stack()
	{
		
	}

	void push(int item)
	{
		_internalList.push_back(item);
	}

	int pop()
	{
		int tmp = -1;

		if (!_internalList.empty())
		{
			tmp = _internalList.back();
			_internalList.pop_back();
		}

		return tmp;
	}

	int size() const
	{
		return _internalList.size();
	}

	bool empty() const
	{
		bool isEmpty = true;

		if (!_internalList.empty())
		{
			isEmpty = false;
		}
		return isEmpty;
	}

	int top() const
	{
		int tmp = -1;

		if (!_internalList.empty())
		{
			tmp = _internalList.back();
		}
		return tmp;
	}

};



int main()
{

	//char result[3]; �� char result[3] = ""; �̰Ͱ��� ����
	//strcat�� strcpy�� ���� ã��

	//std::cout �� printf() , puts() �� ����
	//��Ʈ���� ���۶�?
	//�׸��� �˰����̶�?
	// & �� addressof �� ����
	//�迭�� �������� �����ͷ� �����ϰ�, �� �����Ϳ� 1�� ���ϸ�, �迭�� ���� �ε����� ���� ã���� �ִ�
	//�迭�� �ε����� �����ϴ°� �ƴ϶�, �����ͷ� ������ �����Ѱ�?
	



	return 0;
}

//c++�� char �� c#�� byte�� �����
//c++������ ����,���� �� �Ǹ�, c#���� ������ ���ڸ� �ǰ�, ���ڴ� byte�� ����