#include <iostream>

using namespace std;

double hwa(double sup);

int main()
{
	double ip = 0, end = 0;

	ip = hwa(ip);
	end = ip * 63240;
	cout << ip << "광년은 " << end << "천문 단위입니다.";
	return 0;
}

double hwa(double sup)
{
	cout << "광년 수를 입력하고 Enter 키를 누르십시오: ";
	cin >> sup;

	return sup;
}