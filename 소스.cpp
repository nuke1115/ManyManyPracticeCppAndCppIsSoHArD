/*
char a[8] = "1.a�� "; //�ѱ� : 1ĭ�� 3ĭ, ����,����,���� : ��ĭ�� 1ĭ //���Ṯ�� �Ѱ��� ������ ������ Ȯ���ص־ߵȴ�

	const char * b = "asdf"; // �����ͷ� �ش� ���ڿ��� �ִ� readonly������ �����ؿ´� // ����, ������ �Ұ��ϰ�, const�� ����Ǿ��Ѵ�. //�������

	std::string c = "asdf"; // // //�������� ����

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


*/