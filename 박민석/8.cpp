/*if (test-condition)
        statement
        
      test-condition 참이면 실행 거짓이면 무시하고 건너뜀 */


/*if (test - condition)
        statement
else
         statement2              -> test - condition 참이면  statement실행하고 거짓이면 statement2실행
         
         
         if else 구문에서 양자택일하는 두 작업은 단일 구문 이어야 한다  하나 이상의 구문이 요구될 떄는 중괄호 {} 로 묶어야 한다. */


/*if else if else 구문
-> if (ch == 'A')
        a_grade++; -> 선택 1
   else
       if (ch == 'B')선택 2
         b_grade++; 하위 선택 1
       else
         soso++; 하위 선택 2*/

/*for문 ->

for문 단계 처리
1. 조건 검사에 사용할 카운터 값을 초기화 한다.
2. 루프를 진행할 것인지 조건을 검사한다.]
3.루프 몸체를 수행한다. -> 조건이 참일 떄만 수행한다. 
4. 카운터 값을 갱신한다

int main()
{
    int i; // 카운터 선언 

    for (i = 0; i < 5; i++)
    {
        cout << "c++가 루프를 사용합니다\n";
    }
    cout << "루프를 언제 끝내야 하는지 알고 있습니다\n";

    return 0;
}
for 루프는 진입 조건 루프이다. 각 루프 주기에 진입할 떄 조건 검사 표현식이 평가됨

*/



/*#include <iostream>

using namespace std;


int main()
{
    cin;
    cout;

    char ch;

    int spaces = 0;
    int total = 0;

    cin.get(ch);

    while (ch == '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }

    cout << "이 문장의 총 문자 수는" << total << "이고";
    cout << "그 중에서 빈칸은" << spaces << "개입니다 \n";

    return 0;
}*/

/*#include <iostream>

using namespace std;


int main()
{
    char ch;

    cout << 타이핑 하시면, 반복수행\n;
    cin.get(ch);
    while(ch !='.')
    {
       if(ch == '\n');
               cout << ch; -> 개행 문자일떄 실행

       else
           cout << ++ch -> 개행 문자가 아닌 다른 문자일떄 실행
        cin.get(ch)
    }
    return 0;
}*/
