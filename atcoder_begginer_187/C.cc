/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//作戦：!つきの物と、!がついていない物をそれぞれ格納する
//２つの配列をsortする。
//!つきの配列から、!がついていない物で同じものがあるか探る。
//検索する時は、もし同じ文字列でもう一度検索する場合は、検索しないように条件を足しておく。

vector<string> x;
vector<string> y;
int n;

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s.substr(0,1) == "!"){
            x.push_back(s);
        }else{
            y.push_back(s);
        }
    }

    if(x.size() == 0 || y.size() == 0){
        cout << "satisfiable";
    }

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    string former = "";
    for (size_t i = 0; i < x.size(); ++i) {
        if(former == x[i]){
            continue;
        }
        if(find(y.begin(), y.end(), x[i].substr(1)) != y.end()){
            cout << x[i].substr(1);
            return 0;
        }
    }
    return 0;
}
*/


#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<string> S(N);
    for(string& s : S) cin >> s;
    unordered_set<string> h(S.begin(), S.end());
    for(string& s : S) if(h.count('!' + s)){
        cout << s << endl;
        return 0;
    }
    cout << "satisfiable" << endl;
}

//unordered_setを使うと、同一キーが排除されたコンテナが作成される。
//そして、count関数を使うと、同一の文字列が含まれている物を検索してくれる。
