#include <iostream>

using namespace std;
int main(void){
	int total;
	int A[100];

	std::cout << "total = ";
    cin >> total;
	std::cout << "nums = ";
    for(int i=0; i<total; i++)cin >> A[i];

	std::cout << endl;
	std::cout << endl;

	std::cout << "total = ";
	std::cout <<  total ;
	std::cout << endl;
    
    for(int i=0; i<total; i++){
	    std::cout << i <<"番目" << endl;
	    std::cout <<  A[i] << endl;
    }
    
	std::cout << endl;

}