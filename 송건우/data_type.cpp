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
//	cout << "���� ������ : 9 / 5 = " << 9 / 5 << endl;
//	cout << "�ε� �Ҽ�����  ������ : 9.0 / 5.0 = " << 9.0 / 5.0 << endl;
//	cout << "ȥ�� ������: 9.0 / 5 = " << 9.0 / 5.0 << endl;
//	cout << "double�� ���: 1e7 / 9.0 = ";
//	cout << 1.e7 / 9.0 << endl;
//	cout << "float�� ��� : 1e7f/9.0f = ";
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

	cout << "����� ü���� �Ŀ�� ������ �Է��Ͻÿ� : ";
	cin >> lbs;

	int stone = lbs / Lbs_per_stn;
	int pounds = lbs % Lbs_per_stn;
	cout << lbs << " �Ŀ��� " << stone
		<< " ����, " << pounds << " �Ŀ���Դϴ�.\n";



	return 0;
}