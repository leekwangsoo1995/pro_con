#include<iostream>
using namespace std;
int N,M,A[100],B[100],flag;

int binarySearch(int key){
    int left,right,mid;
    left = 0;
    right = N;
    while (left < right){
        mid = (right + left) / 2;
        if(A[mid] == key){
            return mid;
        }
        if(A[mid] > key){
            right = mid;
        }else{
            left = mid + 1;
        }
    }
    return 0;


}

int main(){
    int result;
    flag=0;
    cin >>N;
    for(int i=0;i<N;i++)cin>>A[i];
    cin >>M;
    for(int i=0;i<M;i++)cin>>B[i];
    for(int i=0;i<M;i++){
        result = binarySearch(B[i]);
        cout << result << endl;
    }

}