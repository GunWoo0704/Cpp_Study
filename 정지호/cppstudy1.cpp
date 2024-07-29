//Listing 06.1

/*#include <iostream>

int main()
{
    using namespace std;

    char ch;
    int spaces = 0;
    int total = 0;
    cin.get(ch);
    
    while (ch != '.')
    {
        if (ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }
   cout << "이 문장의 총 문자 수는 " << total << "이고, ";
   cout << "그중에서 빈칸은 " << spaces << "개입니다.\n";

    return 0;
}*/

//Listing 06.2

/*#include <iostream>

int main()
{

    char ch;

    std::cout << "타이핑하시면, 반복 수행하겠습니다. \n";
    std::cin.get(ch);
    
    while (ch != '.')
    {
        if (ch == '\n')
            std::cout << ch;
        else
            std::cout << ++ch;
        std::cin.get(ch);
    }
    //++ch 대신 ch +1을 사용하면 어떻게 될싸?
   std::cout << "\n혼란스럽게 해서 죄송합니다.\n";
   //std::cin.get();
   //std::cin.get();

    return 0;
}*/

//Listing 06.3

#include <iostream>
const int Fave = 27;
int main()
{
    using namespace std;
    int n;
    cout << "1부터 100까지 범위에서 하나의 수를 알아맞히는 게임입니다.\n ";
    cout << "내가 좋아하는 수는 무엇일까요?";
    do
    {
        cin >> n;
        if (n < Fave)
            cout << "그것보다 큽니다. 무엇일까요? ";
        else if (n > Fave)
            cout << "그것보다 작습니다. 무엇일까요? ";
        else
            cout << "맞았습니다. 정답은 " << Fave << "입니다.\n";
    } while (n != Fave);
   
    return 0;
}

