#include<iostream>

const int ArSize = 20;

int mainmain()
{
	using namespace std;

	//for문 true(1),false(0)

	/*cout << "카운트 시작값을 입력하시오: ";
	int limit;
	cin >> limit;
	int i;
	for (i = limit; i; i--)
		cout << "i = " << i << endl;
	cout << "i = " << i << "이므로 루프를 종료합니다." << endl;*/




	//루프를 사용한 문자열 거꾸로

	/*cout << "단어 하나를 입력하십시오: ";
	string word;
	cin >> word;*/

	//문자열 거꾸로 출력한다
	/*for (int i = word.size() - 1; i >= 0; i--)
		cout << word[i];
	cout << endl << "종료." << endl;*/





	//복합 구문(블록) 사용

	/*cout << "값 5개의 합계와 평균을 구합니다.\n";
	cout << "값 5개를 입력하십시오.\n";

	double number;
	double sum = 0.0;

	for (int i = 1; i <= 5; i++)
	{
		cout << "값 : " << i << ": ";
		cin >> number;
		sum += number;
	}

	cout << "값 5개가 모두 입력되었습니다.\n" << "------------------------------------------\n";
	cout << "입력한 값 5개의 합계는 " << sum << "입니다.\n";
	cout << "입력한 값 5개의 평균은 " << sum / 5 << "입니다.\n";
	cout << "감사합니다.\n";*/



	

	//콤마 연산자, 문자열 뒤집기

	/*cout << "단어를 하나 입력하시오: ";
	string word;
	cin >> word;

	char temp;
	int i, j;
	for (j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\n종료.\n";*/




	//배열을 사용하여 문자열 비교
	/*char word[5] = "?ate";

	for (char ch = 'a'; strcmp(word, "mate"); ch++)
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "루프가 끝난 후에 단어는 " << word << "입니다.\n";*/
	
	
	/*char name[ArSize];

	cout << "영문 이름을 입력하십시오: ";
	cin >> name;
	cout << "귀하의 영문 이름을 한 줄에 한 자씩\n";
	cout << "ASCII 코드와 함께 표시하면 이렇습니다.\n";
	int i = 0;
	while (name[i] != '\0')
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}*/





	return 0;
}