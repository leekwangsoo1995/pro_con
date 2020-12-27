#include <iostream>
using namespace std;

void selectionSort(int A[],int N){
    for(int i=0;i<N;i++){
        int minx = i;
        for(int j=i; j<N;j++){
            if(A[j] < A[minx]){
                minx = j;
            }
        }
        swap(A[i],A[minx]);
    }
}

void bubbleSort(int A[],int N){
    for(int i=0;i<N;i++){
        for(int j=N;j>i;j--){
            if(A[j] < A[j-1]){
                swap(A[j],A[j-1]);
            }
        }
    }
}


int main(void){
	int A[100],B[100],N;

	std::cout << "total = ";
    cin >> N;
	std::cout << "nums = ";
    for(int i=0; i<N; i++)cin >> A[i];
    for(int i=0; i<N; i++)B[i] = A[i];
    

    selectionSort(A,N);
    bubbleSort(B,N);

    for(int i = 0;i<N;i++){
        if(i) cout << " ";
        cout << A[i]; 
    }
	std::cout << endl;

    for(int i = 0;i<N;i++){
        if(i) cout << " ";
        cout << B[i]; 
    }
	std::cout << endl;

    return 0;
}
