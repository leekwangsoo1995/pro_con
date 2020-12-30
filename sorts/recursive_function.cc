#include<iostream>
using namespace std;
int N;
//再帰関数は、呼び出し元にreturnが行われる。

int factorial(int N){
    cout << N;
    if(N == 1){
        return 1;
    }
    return N * factorial(N - 1);

}

int main(){
    int x;
    cin >>N;
    x = factorial(N);
    cout << x;
}