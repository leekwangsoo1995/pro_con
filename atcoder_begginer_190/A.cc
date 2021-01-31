#include<iostream>
using namespace std;
int A,B,C;

int main(){
    cin >> A;
    cin >> B;
    cin >> C;

    if(A > B){
       cout << "Takahashi"; 
    }else if(B > A){
        cout <<  "Aoki";
    }else{
        if(C == 0){
            cout << "Aoki";
        }else{
            cout << "Takahashi";
        }
    }

    return 0;
}
