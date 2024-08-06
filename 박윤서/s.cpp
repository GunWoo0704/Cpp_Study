#include<iostream>


const char* qualify[4] =
{
	"만미터 달리기",
	"모래사장 씨름",
	"비치 발리",
	"부메랑 던지기"
};


int main()
{
	using namespace std;
	//322쪽
	int age;
	cout << "나이를 입력하시오: ";
	cin >> age;
	int index;

	if (age > 17 && age < 35)
		index = 0;
	else if (age >= 35 && age < 50)
		index = 1;
	else if (age >= 50 && age < 65)
		index = 2;
	else
		index = 3;

	cout << "당신은 " << qualify[index] << "에 참가할 수 있습니다.\n";
	




	//331쪽 조건연산자
	/*int a, b;
	cout << "두 개의 정수를 입력하시오: ";
	cin >> a >> b;
	cout << "둘 중에서 더 큰 정수는 ";
	int c = a > b ? a : b;
	cout << c << "입니다.\n";*/




	return 0;



}