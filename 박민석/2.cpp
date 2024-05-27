#include <iostream>

using namespace std;

int main()
{
	float a, b; //a : 마일값 b: 키로미터 값
	cout << "마일 입력 :";
	cin >> a;
	b = a * 1.609349;

	cout << "키로미터로 환산하면 : " << b;
	return 0;
}