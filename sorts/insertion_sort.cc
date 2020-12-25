#include <iostream>

using namespace std;
int main(void){
	int a;
	std::cout << "整数を入力してください。 a = ";

	for ( ;!(std::cin >> a); ) {

		std::cout << "入力が間違っています" << std::endl << " a = ";

	}

	std::cout << " a = " << a << std::endl;
}