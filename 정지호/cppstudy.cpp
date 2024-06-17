//Listing 02.1
/*#include <iostream>

int main()
{
    using namespace std;
    cout << "C++의 세계로 오십시오.";
    cout << endl;
    cout <<"후회하지 않으실 겁니다!" << endl;
    return 0;
}*/

//출력: C++의 세계로 오십시오.
//     후회하지 않으실 겁니다!

//Listing 02.2

/*#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    carrots = 25;
    cout << "나는 당근을 ";
    cout << carrots;
    cout << "개 가지고 있다.";
    cout << endl;
    carrots = carrots - 1;
    cout << "아삭아삭, 이제 당근은 " << carrots << "개이다." << endl;
    return 0;
}*/

/*#include <iostream>

int main()
{
    using namespace std;

    int carrots;
    int i,a;
    a=25;

    for(i = 25; i > 0; i--)
    {
    carrots = a;
    cout << "나는 당근을 ";
    cout << carrots;
    cout << "개 가지고 있다.";
    cout << endl;
    carrots = a = a - 1;
    cout << "아삭아삭, 이제 당근은 " << carrots << "개이다." << endl;
    }
    return 0;
}*/

//Listing 02.3

#include <iostream>

int main()
{
    using namespace std;

    int carrots;

    cout << "당근을 몇 개나 가지고 있니?" << endl;
    cin >> carrots;
    cout << "여기 두 개가 더 있다. ";
    carrots = carrots + 2;
    cout << "이제 당근은 모두 " << carrots << "개이다." << endl;
    return 0;
}
