//https://atcoder.jp/contests/abc188/tasks/abc188_d
#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#include <tuple>
#define int long long
#define rep(i, n) for(i = 0; i < n; i++)
//defineで、関数を定義している。
using namespace std;
 
int n, C;
int a[200000], b[200000], c[200000];
vector<int> day;
 
signed main() {
	int i;
	
	cin >> n >> C;
	rep(i, n) {
		cin >> a[i] >> b[i] >> c[i];
		b[i]++;
	}
    //repを呼び出す事で、defineで定義された、rep(i, n) for(i = 0; i < n; i++)が実行される。
	rep(i, n) {
		day.push_back(a[i]);
		day.push_back(b[i]);
	}
    /*
	sort(day.begin(), day.end());
	day.erase(unique(day.begin(), day.end()), day.end());
	
	int m = day.size();
	vector<int> imos(m);
	rep(i, n) {
		int idA = lower_bound(day.begin(), day.end(), a[i]) - day.begin();
		int idB = lower_bound(day.begin(), day.end(), b[i]) - day.begin();
		imos[idA] += c[i];
		imos[idB] -= c[i];
	}
	rep(i, m - 1) imos[i + 1] += imos[i];
	
	//rep(i, m) cout << "day[" << i << "] = " << day[i] << endl;
	
	int ans = 0;
	rep(i, m - 1) {
		int width = day[i + 1] - day[i];
		int h = min(imos[i], C);
		ans += width * h;
	}
	cout << ans << endl;
	return 0;*/
}