#include <iostream>

using namespace std;

double hwa(double sup);

int main()
{
	double ip = 0, end = 0;

	ip = hwa(ip);
	end = 1.8 * ip + 32.0;
	cout << "섭씨 " << ip <<"도는 화씨로 "<< end << "도입니다.";
	return 0;
}

double hwa(double sup)
{
	cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오: ";
	cin >> sup;

	return sup;
}