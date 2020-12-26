#include <iostream>

using namespace std;
int main(void){
	int A[100],total,tmp1,tmp2;

	std::cout << "total = ";
    cin >> total;
	std::cout << "nums = ";
    for(int i=0; i<total; i++)cin >> A[i];

    for(int i=0;i<total;i++){
        for(int j=i;0<j;j--){
            if(A[j] < A[j - 1]){
                tmp1 = A[j];
                tmp2 = A[j - 1];
                A[j - 1] = tmp1;
                A[j] = tmp2;
            }
        }
        for(int i=0; i<total; i++){
	        std::cout << i <<"番目" << endl;
	        std::cout <<  A[i] << endl;
        }
    }


    
	std::cout << endl;

}
