#include<bits/stdc++.h>
using namespace std;
int a[10010];
int main(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)cin >> a[i];
	int ans=0;
	for(int l=0;l<n;l++){
		int x=a[l];
		for(int r=l;r<n;r++){
			x=min(x,a[r]);
			ans=max(ans,x*(r-l+1));
		}
	}
	cout << ans;
}

//またまた答えを見てしまったシリーズ。
//結局、一番左から順番に一番小さい数を取得しつつ、
//最小の値を使って計算をしていき、(min)
//最大値を一時保存していくのが正解になる。(max)