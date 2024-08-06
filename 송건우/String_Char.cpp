//#include <iostream>
//
//int main() {
//	char greeting[14] = "Hello, World!"; // 공백과 쉼표 포함
//
//	// 각 문자를 출력
//	for (int i = 0; i < 13; ++i) {
//		std::cout << "greeting[" << i << "]: " << greeting[i] << std::endl;
//	}
//
//	return 0;
//}
//
//char bird[11] = "Mr. Cheeps";
//char fish[] = "Bubbles"; // 알아서 배열 크기 조절해줌 || 배열 크기는 널 종결자를 포함하도록 자동으로 설정.

//sizeof 함수는 배열의 전체 바이트를 알려줌
//strlen() 함수는 널 문자 제외 하고 문자들만 리턴 함 (최소 크기를 알고 싶으면 strlen(gunwoo) + 1을 해야 함) 


#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20; // 초기화 제대로 안 하면 쓰레기값 출력 될 수도 있음
	char name[ArSize];
	char dessert[ArSize];

	cout << "이름을 입력하십시오 : \n";
	cin >> name;
	cout << "좋아하는 디저트를 입력하십시오 : \n";
	cin >> dessert;
	cout << "맛있는 " << dessert;
	cout << " 디저트를 준비하겠습니다. " << name << " 님!\n";


	return 0;
} 

// 이 코드가 정상 출력 되는데 std::cin은 공백(스페이스, 탭, 개행문자)을 구분자로 사용하여 입력을 받기 때문에
// 
// 이름과 디저트 모두 공백이 나타날 때까지의 문자열만 저장 
// 
// John Doe"와 같이 공백이 포함된 이름을 입력하면, "John"만 name 배열에 저장되고 "Doe"는 다음 입력으로 처리될 수 있음.
// 
// C에서 문자열을 출력할 때, 특히 printf를 사용하여 버퍼가 남아 다음 출력문에 영향을 미칠 수 있는 경우는 주로 출력 버퍼가 제대로 플러시되지 않았을 때 발생
// 
// 출력 버퍼링은 여전히 발생할 수 있음
// 
// std::cout은 줄바꿈 문자를 출력할 때마다 자동으로 플러시를 수행 혹시 버그 발생 시 cout.flush();
// 
// 아무리 생각해도 char 배열을 이용해서 문자열 처리하는 건 c++에서 너무 비효율적 
// 
// 1. 배열 크기도 사용자가 지정해줘야 함.
// 
// 2. 버퍼 문제 발생시 플러시 해야 함 <-- 골치가 상당히 아픔
// 
// string 경우 줄 바꿈 하면 자동 플러시 됨 
// 
// endl을 남용하면 불필요한 플러시로 인해 프로그램의 성능이 저하될 수 있음.특히, 많은 양의 데이터를 출력할 때 \n을 사용하는 것이 더 효율적