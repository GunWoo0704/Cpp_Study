// C++  기초 플러스 정리
// myfirst.cpp -- 메시지를 출력한다.
#include <iostream>
Int main()
{
	using namespace std;
	Cout << “C++의 세계로 오십시오.”;
	Cout << ednl;
	Cout << “후회하지 않으실 겁니다!” << endl;
	Return 0;
}

c에서의 입력과 출력 c프로그래밍, printf 함수 대신 cout
인터페이스 역활을 하는 함수 머리
main() 함수의 정의가 함수머리 int main()으로부터 시작한다는 사실
C++ 전처리기와 iostream 파일
#inclde <iostream>
Using namespace std;
C와 마찬가지로 C++도 전처리기를 사용한다.전처리기는 컴파일을 하기 전에 소스 파일을 대해 미리 어떤 처리를 수행하는 프로그램이다.
#include <iostream> // 전처리 지시자
이 지시자는 전처리기에게 iostream 파일의 내용을 프로그렘에 추가하라고 지시
프로그램에서 입력과 출력을 위해 cin과 cout을 사용하려면 iostream 파일을 포함시켜야 한다.
이름 공간 iostream.h  대신에 iostream을 사용할 떄, 프로그렘이 isstream의 정의를 사용할 수 있게 하려면 다음과 같은 이름 공간 지시자를 사용해야 한다.
Using namepace std; 이것을 using 지시자라 한다.

Cout을 이용한 C++의 출력 cout << “C++의 세계로 오십시오.”
큰따옴표 안에 들어 있는 연속된 문자들을 문자열
<< 문자의 흐름
조정자 endl
Cout << endl;  endl은 새로운 행이 시작된다는 중요한 개념을 나타내는 특별한 C++표기이다.Endl을 출력 스트림에 삽입하면 화면 커서가 다음 행의 시작위치로 간다.cout에게 특수한 의미를 가지는 endl과 같은 특별한 표기들을 조정자라고 부른다.
개행 문자(\n)
C++는 출력에 새로운 행을 나타내는 다소 고전적인 또 하나의 방법인 C표기 \n을 제공한다.
Cout << “다음은 뭔데 ? \n”; // \n은 새로운 행을 시작하라는 의미이다.
C++ 소스 코드 스타일
한 행에 하나의 구문을 사용한다.
함수를 여는 중괄호{ 와 닫는 중괄호 } 에 각각 한 행을 할애한다.
함수 안에 들어갈 구문들은 중괄호에서 약간 오른쪽으로 들어간 위치에서 시작한다.
함수 이름과 괄호 사이에는 어떠한 화이트스페이스도 넣지 않는다.

C++ 프로그램은 함수들의 집합이다.함수는 구문들의 집합이다.C++는 여러 종류의 구문들을 사용한다.
// carrots.cpp ? 음식물 처리 프로그램
// 하나의 변수를 사용하고 출력한다 
#int main() {
	Unsing namespace std;
	Int carrots;  // 정수 변수를 선언한다.
	carrots = 25;
	cout << “나는 당근을 “;
	cout << carrots; // 변수의 값을 출력한다. 
	Cout << endl;
	Carrots = carrots - 1;
	Cout << “ 아삭아삭, 이제 당근은 “ << carrots << “개이다.” << endl;
	return 0;
}
선언 구문은 데이터형을 선언하는 것을 뿐만 아니라, 앞으로 프로그램에서 그 기억 공간에 저장되어 있는 값을 carrots라는 이름으로 사용하겠다고 선언하는 것이다
이와 같은 carrots를 변수라고 부른다.변수의 선언 : int carrots;

대입 구문 int Steinway;
Int baldwin;
Int Yamaha;
Yamaha = baldwin = sterinway = 88; 대입 연산자
Cout의 새로운 사용법 cout이 int형의 수를 출력하기 전에 문자형으로 변환한다.
출력할 것이 문자열인 정수인지 알아차리는 cout의 능력은 c++가 객체 지향 기능을 가지고 있기 때문이다.


C++의 기타 구문
Cout은 출력을 수행하는 객체인 데 반하여, cin은 입력을 수행하는 객체다.
// getinfo.cpp ? 입력과 출력
#include <iostream> 
Int main() {
	using namespace std;
	Int carrots;
	Cout << “ 당근을 몇 개나 가지고 있니 ? ” << endl;
	Cin >> carrots; // C++ 입력
	Cout << “여기 두 개가 더 있다.“;
	Carrots = carrots + 2;
	// 다음 라인은 출력을 연결한다. 
	Cout << “이제 당근은 모두 “ << carrots << “개이다.” << endl;
	Return 0;
}
두가지 새로운 기능을 선보인다.Cin을 사용하여 키보드로부터 정수를 입력받는 것이고, 다른 하나는 네 개의 출력을 하나로 이어 붙여 출력하는 것이다.
Cin 사용법 cin은 iostream 파일에 입력 스트림을 나탄내는 객체로 정의되어 있다.
출력할 때에는 cout이 << 연산자를 사용하여 문자들을 출력 스트림에 삽입하고, 입력할 때에는 cin이 >> 연산자를 사용하여 입력 스트림에서 문자들을 가져온다.

Int carrots; 이 선언은 int형의 속성을 가진 변수(carrots)를 생선한다.즉 carrots는 정수를 저장할 수 있고, 더하기나 뺴기와 같은 연산에 사용될 수 있다.Ostream 클래스는 iostream 파일에 정의 되어있다.
#include <iostrem> 
Using nameespace std;
Int main()
Cout << “trust me”; cout 객체가 매개변수를 출력한다.



분기 구문과 논리 연산자
If 구문 c++ 프로그램은 하나의 특정한 행동을 수행할 것인지 말 것인지 선택해야 할 떄if 구문을 사용한다.if구문은 조건을 평가한 결과가 참이면 그 다음에 오는 하나의 구문 또는 구문 블록을 수행하고, 결과가 거짓이면 그것들을 무시하고 건너뛴다.
// if.cpp ?-if 구문
#include <iostream
	Int main() {
	using std::cin; // declaration을 사용
	Using std::cout;
	Char ch;
	Int spaces = 0;
	Int total = 0;
	Cin.get(ch);
	While(ch != ‘.’) // 문장의 끝(마침표) 에서 루프 종료
	{
		if (ch == ‘ ‘) // ch의 빈칸인지 검사
			++spaces; // ch가 빈칸일 때에만 수행 
		++total; // 빈칸이든 아니든 매번 수행
		Cin, get(ch);
	}
	Cout << “이 문장의 총 문자 수는 “ << total << “이고, “;
	Cout << “그 중에서 빈칸은 “ << spaces << “개입니다.\n”;
	Return 0;
	If else 구문은 두 개의 구문 또는 블록 중에서 어느 쪽을 수행할 것인지를 프로그램이 결정한다.
		Ifelse.cpp
		// ifelse.cpp ? if else 구문 
#include <iostream> 
		Int main() {
		Char ch;
		Std::cout << “타이핑하시면, 반복수행하겠습니다.\n”;
		Std::cin.get(ch);
		While(ch != ’.’) {
			If(ch == ‘\n’)
				Std::cout << ++ch; // 그 밖의 문자일 떄 수행
			Std::cin.get(ch);
		}
		//++ch 대신 ch + 1을 사용하면 어떻게 될까?
		Std::cout << “\n혼란스럽게 해서 죄송합니다.\n”;
		// std::cin.get();
		// std::cin.get();
		Return 0;
	}
	If else 구문의 작성 스타일
