#include<iostream>
using namespace std;
//https://atcoder.jp/contests/abc188/tasks/abc188_b

int N[100000],M[100000];
int num,tot;
int main(){
    cin >> num;

    for(int i=0;i<num;i++){
        cin >> N[i];
    }
    for(int i=0;i<num;i++){
        cin >> M[i];
    }

    for(int i=0;i<num;i++){
        tot += N[i] * M[i];
    }
    if(tot == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}
