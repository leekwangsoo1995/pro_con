//https://atcoder.jp/contests/abc188/tasks/abc188_c
#include <stdio.h>
#include <utility>
#include <algorithm>
#include <vector>
#include<iostream>

using namespace std;
int ri() {
	int n;
	scanf("%d", &n);
	return n;
}
int main() {
	int n = ri();
	vector<int> a(1 << n);
	for (auto &i : a) i = ri();
	int half = 1 << (n - 1);
	int max = max_element(a.begin(), a.end()) - a.begin();//これで、最大値のvectorの箇所を取得している。
    //max_element(a.begin(), a.end())だけだと、イテレータが返される。
    auto start = max < half ? a.begin() + half : a.begin();
    //maxの位置が半分よりも小さければ、start地点を半分から開始する。
	printf("%d\n", (int) (max_element(start, start + half) - a.begin() + 1));
    //またmax_elementを使って、先ほど見つけた箇所から位置を取得している。
	
	return 0;
}


//完全２分探索木に対する理解がきちんと出来ていて、max_elementを正しくできれば、要素の位置を問題なく取得できる。