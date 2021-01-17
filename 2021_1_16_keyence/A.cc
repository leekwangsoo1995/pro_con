#include<iostream>
#include <stdio.h>
using namespace std;
//https://atcoder.jp/contests/keyence2021/tasks/keyence2021_a
//間違いその１、C++のint型の最大値は2147483647である。それ以上の数値は保存できない。
//風呂上りに計算量を少なくして挑戦してみたけどやっぱりダメ。だった。

int n;

int main(){
    cin >> n;
    int max = n*n;
    
    unsigned long long number[max];
    unsigned long long a[n];
    unsigned long long b[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        cin >> b[i];
    }

    for(int i=0;i<n;i++){
       number[i] = 0;
       for(int x=0;x<i+1;x++){
           for(int k=0;k<i+1;k++){
               if(x>k){
                  continue;
               }
               if(number[i] < a[x]*b[k]){
                   number[i] = a[x]*b[k];
               }
           }
       } 
    }
    
    for(int i=0;i<n;i++){
        cout << number[i] << endl;
    }

    return 0;
}

//解答。
//MAX関数の使い方を理解していれば、かなり簡単に書ける。
//Aは最大値を常に保持しておく。
//Bは常に最新の値で掛け算しておく
//A*Bで出したそれまでの積と最新の掛けた値を比較する事で、解答が得られる。
//プロコンの問題は、問題を解くまえに、どうすれば計算を最短でできるか考えた方が良さそう。
//計算した方が良い部分と、計算しなくて良い部分を事前に考えておく事。

#include <algorithm>
#include <iostream>
#include <vector>
using ll = long long;
using namespace std;
const char EOLN = '\n';
int n;
int main() {
  cin >> n;
  vector<ll> a(n), b(n), c(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  ll ma = a[0];
  c[0] = a[0] * b[0];
  for (int i = 1; i < n; i++) {
    ma = max(ma, a[i]);
    c[i] = max(c[i - 1], ma * b[i]);
  }
  for (int i = 0; i < n; i++) cout << c[i] << endl;
  return 0;
}