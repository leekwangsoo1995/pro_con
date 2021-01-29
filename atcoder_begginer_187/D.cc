#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
using ll = int64_t;

//15分考えたが、計算方法が思い付かず、答えを見た。
//XにAの値を入れ続ける。
//で、一回演説すると、青木氏と高橋氏の影響度があるから、x[i]に2A+Bをしていく。
//数学だ。

int main(){
    ll N;
    cin >> N;
    ll X = 0;
    vector<ll> x(N);
    for(ll i = 0; i < N; i++){
        ll A, B;
        cin >> A >> B;
        X -= A;
        x[i] = A + A + B;
    }
    sort(x.begin(), x.end());
    ll ans = 0;
    while(X <= 0){
        X += x.back();
        x.pop_back();
        ans++;
    }
    cout << ans << endl;
}