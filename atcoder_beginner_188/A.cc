#include<iostream>
using namespace std;
//問題文
//https://atcoder.jp/contests/abc188/tasks/abc188_a

int n,m;
int main(){
    cin >> n >> m;

    if(n > m){
        if(n < m + 3){
            cout << "yes";
        }else{
            cout << "no";
        }
    }else{
        if(n + 3 > m){
            cout << "yes";

        }else{
            cout << "no";
        }
    }
    return 0;
}



