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

//他人の解答を読んだ感想
//min関数やmax関数を使うと更にコード量を減らせる
//数学を使い、+-2以内の誤差であるかどうかを判別する方法もある。



