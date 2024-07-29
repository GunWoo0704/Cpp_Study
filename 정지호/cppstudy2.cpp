//Listing 02.4
//sqrt.cpp -- sqrt() 함수를 사용한다

/*#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    double area;
    cout << "마루 면적을 평방피트 단위로 입력하시오: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "사각형 마루라면 한 변이 " << side
        << "피트에 상당합니다." << endl;
    cout << "멋지네요! " << endl;
    return 0;
}*/


//Listing 02.5
//ourfunc.cpp -- 사용자가 작성하는 함수를 정의한다

/*#include <iostream>
void simon (int);

int main()
{
    using namespace std;

    simon(3);
    cout << "정수를 하나 고르시오: ";
    int count;
    cin >> count;
    simon (count);
    cout << "끝!" << endl;
    return 0;
}

void simon(int n)
{
    using namespace std;

    cout << "Simon 왈, 발가락을 " << n << "번 두드려라." << endl;
}*/

//Listing 02.6
//convert.cpp -- 스톤을 파운드로 환산한다

/*#include <iostream>
int stonetolb (int);

int main()
{
    using namespace std;

    int stone;
    cout << "체중을 스톤 단위로 입력하시오: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << "스톤은 ";
    cout << pounds << "파운드입니다." << endl;
    return 0;
}

int stonetolb (int n)
{
    return 14 * n;
}*/

//Listing 04.1
//arrayone.cpp -- 정수형의 작은 배열

#include <iostream>

int main()
{
    using namespace std;

    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcosts[3] = {200, 300, 50};

    cout << "고구마 합계 = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << yams[1] << "개가 들어 있는 포장은 ";
    cout << "개당 " << yamcosts[1] << "원씩입니다. \n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];
    cout << "세 포장의 총 가격은 " << total << "원입니다. \n";
    cout << "\nyams 배열의 크기는 " << sizeof yams;
    cout << "바이트입니다. \n";
    cout << "원소 하나의 크기는 " << sizeof yams[0];
    cout << "바이트입니다. \n";
    return 0;
}
