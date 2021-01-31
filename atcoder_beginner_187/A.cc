#include<iostream>
using namespace std;
//https://atcoder.jp/contests/abc187/tasks/abc187_a
//A問題は問題なく正解した。
//char型は16進数で数字を保存しているから、-'0'が必要。

string n,m;
int np,mp;

int main(){
    np = 0;
    mp = 0;
    cin >> n >> m;
    for(int i = 0; i < 3; ++i){
        char x = n[i] - '0';
        np = np + (int)x;
        char y = m[i] - '0';
        mp = mp + (int)y;
    }
    cout << max(np,mp);
    return 0;
}

