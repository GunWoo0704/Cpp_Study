#include <iostream>

using namespace std;

void Show(int, int);

int main()
{
	int a, b; // a는 시 b는 분

	cout << "시간 입력 : ";
	cin >> a;
	cout << "분 입력 :";
	cin >> b;

	Show(a, b);
}

void Show(int hour, int min)
{
	cout << "시각 : " << hour << "시" << min <<"분";
}