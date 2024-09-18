//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int i = 0;
//
//	i = 2 + 4 * 2;
//
//	cout << i;
//
//	return 0;
//}
//


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	cout.setf(ios_base::fixed, ios_base::floatfield);
//	cout << "정수 나눗셈 : 9 / 5 = " << 9 / 5 << endl;
//	cout << "부동 소수점수  나눗셈 : 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
//	cout << "혼합 나눗셈: 9.0 / 5 = " << 9.0 / 5.0 << endl;
//	cout << "double형 상수: 1e7 / 9.0 = ";
//	cout << 1.e7 / 9.0 << endl;
//	cout << "float형 상수 : 1e7f/9.0f = ";
//	cout << 1.e7f / 9.0f << endl;
//
//
//	return 0;
//}


#include <iostream>
using namespace std;

int main()
{
	const int Lbs_per_stn = 14;
	int lbs;

	cout << "당신의 체중을 파운드 단위로 입력하시오 : ";
	cin >> lbs;

	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << " 파운드는 " << stone
		<< " 스톤, " << pounds << " 파운드입니다.\n";



	return 0;
}