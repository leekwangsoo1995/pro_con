//https://atcoder.jp/contests/abc187/tasks/abc187_b
#include<iostream>
#include<vector>
using namespace std;

vector<int> x;
vector<int> y;
int n;

int main(){
    cin >> n;
    int t,p;
    for(int i=0;i<n;i++){
        cin >> t;
        cin >> p;
        x.push_back(t);
        y.push_back(p);
    }
    //あとは、for文を回して、全ての組み合わせを調査してみようかなと。
    //ただ、これは計算量が果てしない事になるから、他に方法を考えないと。
    return 0;
}