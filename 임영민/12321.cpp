#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string address;

    // 사용자로부터 이름 입력 받기
    std::cout << "이름을 입력하세요: ";
    std::getline(std::cin, name);

    // 사용자로부터 주소 입력 받기
    std::cout << "주소를 입력하세요: ";
    std::getline(std::cin, address);

    // 입력된 이름과 주소 출력
    std::cout << "\n입력된 정보:" << std::endl;
    std::cout << "이름: " << name << std::endl;
    std::cout << "주소: " << address << std::endl;

    return  0;
}