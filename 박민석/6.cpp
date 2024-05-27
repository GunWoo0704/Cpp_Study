#include <iostream>

using namespace std;

double change(float);

int main()
{
	float a; //광년 수
	double b; //천문단위

	cout << "광년 수 입력 : ";
	cin >> a;

	b = change(a);
	cout << a << "광년은" << b << "천문 단위이다 ";

	return 0;
}

double change(float var) // a를 받을 변수
{
	double c = var * 63240; //c : 천문단위를 계산하고 리턴할 변수

	return c;
}