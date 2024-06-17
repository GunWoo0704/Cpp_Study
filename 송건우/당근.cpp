//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	cout << "C++의 세계로 오십시오";
//	cout << endl; // 행 변환
//	cout << "후회 No" << endl;
//	return 0;
//}

// 당근

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//
//	int carrots;
//
//	carrots = 25;
//	cout << "나는 당근을 ";
//	cout << carrots;
//	cout << "개 가지고 있다.";
//	cout << endl;
//	carrots = carrots - 1;
//	cout << "이제 당근은 " << carrots << "개이다." << endl;
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	using namespace std;
//	
//	int carrots;
//
//	cout << "당근 몇 개 ? : ";
//	cin >> carrots;
//	cout << "여기 두 개 더 ";
//	carrots = carrots + 2;
//	cout << "이제 당근은 모두 " << carrots << "개이다. " << endl;
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//
//int main()
//{
//	using namespace std;
//
//	double area;
//	cout << "입력";
//	cin >> area;
//	double side;
//	side = sqrt(area);
//	cout << "마루 한변 " << side << "피트에 상당" << endl; cout << "굳" << endl;
//
//	return 0;
//}

#include <iostream>

void simon(int);

int main()
{
	using namespace std;
	simon(3);
	cout << "정수 하나";
	int count;
	cin >> count;
	simon(count);
	cout << "끝" << endl;
	return 0;
}

void simon(int n)
{
	using namespace std;
	cout << "발가락을" << n << endl;

}