/*함수 c++ 함수는 두가지 유형이 있다.리턴값이 있는 것과 리턴값이 없는 것.표준 함수 라이브러리에 있는 함수를 사용할 수도 있고, 사용자가 직접 만들어 사용할 수도 있다.
* 리턴값이 있는 함수 리턴값이 있는 함수는 변수에 대입할 수 있는 하나의 값을 만들어 낸다.
// sqrt.cpp ? sqrt() 함수를 사용한다
#include <iostream>
#include <camth>  // 또는 math.h
Int main()
{
    using namespace std;
    Double area;
    Cout << “마루 면적을 평방피트 단위로 입력하시오 : “;
    Cin >> area;
    Double side;
    Side = sqrt(area);
    Cout << “사각형 마루라면 한 변이 “ << side
        << “피트에 상당합니다.” << endl;
    Cout << “멎지네요!” << endl;
    Return 0;
}
변이 함수들 어떤 함수는 하나 이상의 정보를 요구한다.그러한 함수는 여러 개의 매개변수를 콤마로 분리한다.예를들어, 수학함수인 pow()는 매개변수를 2개 요구한다.

사용자 정의 함수 표준 c 라이브러리는 140개 이상의 미리 정의된 함수를 제공한다.
// ourfunc.cpp ? 사용자가 작성하는 함수를 정의한다.
#include <iostream> 
Void simon(int);   // simon()을 위한 함수 원형
Int main()
{
    using namespace std;
    Simon(3); // simon() 함수를 호출한다.
    Cout << “정수를 하나 고르시오 : “;
    Int count;
    Cin >> count;
    Simon(count); // simon() 함수를 다시 호출한다.
    Cout << “끝!” << endl;
    Return 0;
} void simon(int n) // simon () 함수를 정의한다.
{
    using namespace std;
    Cout << “simon 왈, 발가락을 “ << n << “번 두드려라.” << endl;
} // void 형 함수에는 return 구문이 필요없다

리턴값이 있는 사용자 정의 함수
// convert.cpp ? 스톤을 파운드로 환산한다
#include <iostream> 
Int stonetolb(int); // 함수원형
Int main()
{
    using namespace std;
    Int stone;
    Cout << “체중을 스톤 단위로 입력하시오 : “;
    Cin >> stone;
    Int pounds = stonetolb(stone);
    Cout << stone << “ 스톤은 “;
    Cout << pounds << “ 파운드입니다.” << endl;
    Return 0;
}
Int stonetolb(int sts)
{
    return 14 * sts;
}

복수 함수 프로그램에 using 지시자 넣기

데이터 처리
C++ 내장된 데이터형에는 기본형과 복합형이 있다.기본형에는 정수를 표현할 수 있는 정수형과, 소수부가 있는 수를 표현할 수 있는 부동 소수점형이 있다.
정수형, // short, int, long, long long 정수형
// limits.cpp ?- 정수 한계값
#include <iostream>
#include <climits> // 구식 c++에는 limits.h를 사용한다
Int main()
{
    using namespace std;
    Int n_int = INT_MAX;                    //n_int를 int형의 최대값으로 초기화
    Short n_short = SHRT_MAX;          // limits.h 파일에 정의된 기호 상수
    Long n_long = LONG_MAX;
    Long long n_llong = LLONG_MAX;
    // sizeof 연산자는 데이터형이나 변수의 크기를 알아낸다
    Cout << ”int는 “ << sizeof(int) << “ 바이트이다.” << endl;
    Cout << ”short는 “ << sizeof n_short << “ 바이트이다.” << endl;
    Cout << “long은 “ << sizeof n_long << “바이트이다.” << endl << endl;
    Cout << “long long은 “ << sizeof n_llong << “ 바이트이다.” << endl;
    Cout << endl;
    Cout << “최댓값:” << endl;
    Cout << “int: “ << n_int << endl;
    Cout << “short: “ << n_long << endl << endl;
    Cout << “long: “ << n_short << endl << endl;
    Cout << “long long: “ << n_llong << endl << endl;
    Cout << “int의 최솟값 = “ << INT_MIN << endl’;
    Cout << “바이트 당 비트수 = “ << CHAR_BIT << endl;
    Return 0;
}

// exceed.cpp ? 정수 한계값을 초과한다
#include <iostream> 
#define ZERO 0                  // 값 0으로 대체될 기호 상수 ZERO를 정의한다
#include <climits>              // INT_MAX가 int형의 최대값으로 정의되어 있다
Int main()
{
    using namespace std;
    Short Dohee = SHRT_MAX;             // 변수를 최대값으로 초기화
    Unsigned short Insuk = Dohee;      // Dohee가 정의되어 있으므로 맞다
    Cout << “도희의 계좌에는 “ << Dohee < “원이 들어 있고, “;
    Cout << “인숙이의 계좌에도 “ << Insuk << “원이 들어 있다.” << endl;
    Cout << “각각의 계좌에 1원씩 입금한다.” << endl << “이제 “;
    Dohee = Dohee + 1;
    Insuk = insuk + 1;
    Cout << “도희의 잔고는 “ << Dohee << “원이 되었고, “;
    Cout << “인숙이의 잔고는 “ << insuk << “원이 되었다----------------
    */ 
