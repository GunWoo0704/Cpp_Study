//01
/*#include <iostream>

int main()
{
    using namespace std;

    cout << "이름 : 정지호";
    cout << endl;
    cout << "주소 : 남부터미널";

    return 0;
}*/

//02
/*#include <iostream>

int main()
{
    using namespace std;

    int mail;
    int km;

    cout << "마일 단위의 거리를 입력하시오 : ";
    cin >> mail;
    km = mail * 1.60934;
    cout << mail << "마일은 약" << km << "킬로미터 입니다.";
    return 0;
}*/
//마일의 소수부분까지 살릴려면 변수가 저장될 데이터형(실수)을 바꿔야함.

//03 미작성
/*#include <iostream>

int main()
{
    using namespace std;

    cout << "Three blind maice" << endl;
    cout << "Three blind maice" << endl;
    cout << "See how they run" << endl;
    cout << "See how they run" << endl;

    return 0;
}*/
//문제의 조건을 잘 파악하지 못하겠음. 각 문장을 함수로 잡고 2번씩 호출하는 거라면 변수의 데이터형이 문자열이여야함.

//04
/*#include <iostream>

int main()
{
    using namespace std;
    int age;

    cout << "당신의 나이를 입력하시오 : ";
    cin >> age;
    age = age * 12;
    cout << "당신의 나이는 월수로 나타내면 " << age << "입니다.";

    return 0;
}*/

//05
/*#include <iostream>

int main()
{
    using namespace std;
    int sub, hwa;

    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오 : ";
    cin >> sub;
    hwa = sub * 1.8 + 32.0;
    cout << "섭씨 " << sub << "도는 화씨로 " << hwa << "도입니다. ";

    return 0;
}*/
//섭씨를 화씨로 변경하는 과정에서의 소수부분까지 살릴려면 변수가 저장될 데이터형(실수)을 바꿔야함.
//매개 변수로 전달받아 화씨 온도로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 것이 어떤 의미인지 잘모르겠음.

//6
/*#include <iostream>

int main()
{
    using namespace std;
    double gwang, chun;

    cout << "광년 수를 입력하고 입력하고 Enter 키를 누르십시오 : ";
    cin >> gwang;
    chun = gwang * 63240;
    cout << gwang << " 광년은 " << chun << " 천문 단위입니다. ";

    return 0;
}*/
//실수형은 double형 변수
//거기를 매개 변수로 전달받아 천문단위로 환산하여 리턴하는 사용자 정의 함수를 main() 함수가 호출하는 것이 어떤 의미인지 잘모르겠음.


//07
/*#include <iostream>

int main()
{
    using namespace std;
    int ow, mi;

    cout << "시간 값을 입력하시오 : ";
    cin >> ow;
    cout << "분 값을 입력하시오 : ";
    cin >> mi;

    cout << "시각 : " << ow << ":" << mi;

    return 0;
}*/
//main 함수는 void형 함수로 전달하고, void형에서 실행하는 법을 보르겠음.
