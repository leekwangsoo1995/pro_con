#include<iostream>
using namespace std;

//原因：小数点以下の丸め誤差の影響によって、不正解になっていた。
//小数点以下の計算がある時は、100倍数するなど、丸め誤差を避ける方が良い。

int n,x;
int num[1000];
int per[1000];
int amount;
int tot_amount;

int main(){
    cin >> n;
    cin >> x;

    x = x * 100;
    amount = 0;
    tot_amount = 0;
    for(int i=0;i<n;i++){
        cin >> num[i];
        cin >> per[i];
    }

    for(int i=0;i<n;i++){
        if(per[i] == 0){
            amount = 0;
        }else{
            amount = num[i] * per[i];
        }
        tot_amount = amount + tot_amount;
        if(x < tot_amount){
            i = i +1; 
            cout << i;
            return 0;
        }
    }

    cout << "-1";

    return 0;

}