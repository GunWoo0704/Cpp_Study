#include <iostream>
#include <string>

using namespace std;

string three(); // 반환을 string으로 해야 되기 때문
string see();


int main()
{

	string fuc = three();
	string run = see();
	cout << fuc << endl;
	cout << fuc << endl;
	cout << run << endl;
	cout << run;



	return 0;
}

string three()
{
	string blind = "Three blind mice";


	return blind; // 반환을 string으로 해야 되기 때문
}
string see()
{
	string how = "See how they run";

	return how;
}