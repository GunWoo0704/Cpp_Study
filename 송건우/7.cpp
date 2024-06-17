/#include <iostream>

// void형 함수 선언
void time(int hour, int minute);

using namespace std;

int main() {
	int hour, minute;

	cout << "시간 값을 입력하시오 : ";
	cin >> hour;

	cout << "분 값을 입력하시오 : ";
	cin >> minute;

	time(hour, minute);

	return 0;
}

void time(int hour, int minute) {
	cout << "시각: " << hour << ":" << minute << endl;
}/