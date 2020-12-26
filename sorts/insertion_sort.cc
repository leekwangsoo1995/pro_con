#include <iostream>
using namespace std;

int bubbleSort(int A[],int N){
    int sw = 0;
    bool flag = 1;
    for(int i=0;flag;i++){
        flag = 0;
std::cout <<i;
        for(int j=N -1; j>= i+ 1;j--){
            if(A[j] < A[j-1]){
                swap(A[j],A[j-1]);
                flag = 1;
                sw++;
            }
        }
    }
    return sw;

}


int main(void){
	int A[100],N,sw;

	std::cout << "total = ";
    cin >> N;
	std::cout << "nums = ";
    for(int i=0; i<N; i++)cin >> A[i];

    sw = bubbleSort(A,N);

    for(int i = 0;i<N;i++){
        if(i) cout << " ";
        cout << A[i]; 
    }
	std::cout << endl;
	std::cout << sw << endl;

    return 0;
}
