/*
char a[8] = "1.aㅁ "; //한글 : 1칸에 3칸, 영어,문자,숫자 : 한칸에 1칸 //종료문자 한개의 공간은 무조건 확보해둬야된다

	const char * b = "asdf"; // 포인터로 해당 문자열이 있는 readonly영역을 참조해온다 // 따라서, 수정이 불가하고, const로 선언되야한다. //가장빠름

	std::string c = "asdf"; // // //느릴수도 있음

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