#include<bits/stdc++.h>
using namespace std;
int N, pos;
string pattern; // 알파벳 소문자 여러개, * 하나
string name, pre, suf, temp;

void solve(){
    string tmp1, tmp2;
    tmp1 = name.substr(0, pre.length());
    tmp2 = name.substr(name.length() - suf.length(), suf.length());
    if(tmp1 == pre && tmp2 == suf){
        cout << "DA\n";
    } else {
        cout << "NE\n";
    }
}

int main(){
    cin >> N;
    cin >> pattern;

    pos = pattern.find("*");
    pre = pattern.substr(0, pos);
    suf = pattern.substr(pos + 1, pattern.length());
    cout << pre << "\n" << suf << "\n";

    for(int i = 0; i < 3; i++){
        cin >> name;
        if(pre.length() + suf.length() > name.length()){
            cout << "NE\n";
        } else {
            solve();
        }
    }
}