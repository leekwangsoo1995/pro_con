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