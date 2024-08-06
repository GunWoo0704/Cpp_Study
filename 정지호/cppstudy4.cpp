//Listing 04.2
//strings.cpp -- 배열의 문자열을 저장한다

/*#include <iostream> 
#include <cstring> 

int main()
{
    using namespace std;

    const int Size = 15;
    char name1[Size];                              //비어 있는 배열
    char name2[Size] = "C++owboy";                 //문자열 상수로 초기화된 배열

    cout << "안녕하세요! 저는 "<< name2;
    cout << "입니다! 실례지만 성함이?\n"; 
    cin >> name1;
    cout << "아, " << name1 << " 씨! 당신의 이름은 ";
    cout << strlen(name1) << "자입니다만 \n";
    cout << sizeof(name1) << "바이트 크기의 배열에 저장되었습니다.  \n";
    cout << "이름이 " << name1[0] << "자로 시작하는군요. \n";
    name2[3] = '\0';                                  //널 문자 
    cout << "제 이름의 처음 세 문자는 다음과 같습니다: ";
    cout << name2 << endl;
    return 0;
}*/

//Listing 04.3
//instr1.cpp -- 여러 개의 문자열을 읽는다

/*#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "이름을 입력하십시오: \n";
    cin >> name;
    cout << "좋아하는 디저트를 입력하십시오: \n";
    cin >> dessert;
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << "님! \n";
    return 0;
}*/

//Listing 04.4
//instr2.cpp -- getline() 함수로 한 행을 읽는다

/*#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "이름을 입력하십시오: \n";
    cin.getline(name, ArSize);           // 개행 문자가 있는 곳까지 읽는다
    cout << "좋아하는 디저트를 입력하십시오: \n";
    cin.getline(dessert, ArSize); 
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << "님! \n";
    return 0;
}*/

//Listing 04.5
//instr3.cpp -- get() & get() 으로 여러 단어를 읽는다

#include <iostream>

int main()
{
    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "이름을 입력하십시오: \n";
    cin.get(name, ArSize).get();           //  문자열, 개행 문자를 읽는다
    cout << "좋아하는 디저트를 입력하십시오: \n";
    cin.get(dessert, ArSize).get(); 
    cout << "맛있는 " << dessert;
    cout << " 디저트를 준비하겠습니다. " << name << "님! \n";
    return 0;
}
