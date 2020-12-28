#include<iostream>
using namespace std;

int main(){
    int N,M,A[100],B[100],flag;
    flag=0;
    cin >>N;
    for(int i=0;i<N;i++)cin>>A[i];
    cin >>M;
    for(int i=0;i<M;i++)cin>>B[i];

    for(int i=0;i<M;i++){
        for(int j=0;j<N;j++){
            if(B[i] == A[j]){
                flag++;
            }
        }
    }
    cout << flag;
}