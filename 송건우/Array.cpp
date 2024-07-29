#include <iostream>


int main()
{
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;

	int yamscosts[3] = { 200, 300, 50 };

	cout << "고구마 합계 = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << yams[1] << "개가 들어 있는 포장은 ";
	cout << "개당" << yamscosts[1] << "원씩입니다. \n";
	int total = yams[0] * yamscosts[0] + yams[1] * yamscosts[1];
	total = total + yams[2] * yamscosts[2];
	cout << "세 포장의 총 가격은 " << total << "원입니다.\n";
	cout << "\nyams 배열의 크기는 " << sizeof yams << "바이트입니다. \n";
	cout << "원소 하나의 크기는 " << sizeof yams[0] << "바이트입니다. \n";



	return 0;
}