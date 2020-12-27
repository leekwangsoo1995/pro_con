#include <iostream>
using namespace std;

int selectionSort(int A[],int N){
    int sw = 0;
    bool flag = 0;
    for(int i=0;i<N;i++){
        int minx = i;
        for(int j=i; j<N;j++){
            if(A[j] < A[minx]){
                minx = j;
                flag = true;
            }
        }
        if(flag == true){
            sw++;
            swap(A[i],A[minx]);
            flag = false;
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

    sw = selectionSort(A,N);

    for(int i = 0;i<N;i++){
        if(i) cout << " ";
        cout << A[i]; 
    }
	std::cout << endl;
	std::cout << sw << endl;

    return 0;
}
