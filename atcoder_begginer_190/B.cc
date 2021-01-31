#include<iostream>
using namespace std;
long long X,Y,N,S,D;

int main(){
    cin >> N;
    cin >> S;
    cin >> D;

    for(int i=0;i<N;i++){
        cin >> X;
        cin >> Y;
        if(X < S && Y > D){
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";

    return 0;
}