#include<iostream>
#include <vector>
using namespace std;
//https://atcoder.jp/contests/abc188/tasks/abc188_c
long long N,k;
long long M;

int main(){
    cin >> N;
    M = N*N;
    vector<long long> v(M); 
    vector<long long> z(M); 

    for(long long i=0;i<M;i++){
        cin >> v[i];
    }
    for(long long i=0;i<(long long)v.size();i++){
        z[i] = v[i];
    }

    long long t = 0;
    long long k = 0;
    long long max_size = 0;
    while((long long)v.size() != 2){
        if(t==0){
            max_size = (long long)v.size();    
        }
        v[k] = max(v[t],v[t+1]);
        t += 2;
        k++;
        if(t == max_size){
            t=0;
            k=0;
            long long s =  (long long)v.size() / 2;
            for(long long i=0;i<s;i++){
               v.pop_back(); 
            }
        }
    }

    long long ret = min(v[0],v[1]);

    for(long long i=0;i<=M;i++){
        if(z[i] == ret){
            cout << i + 1;
            return 0;
        }
    }

    return 0;
}


