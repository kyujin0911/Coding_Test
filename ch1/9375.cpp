#include<bits/stdc++.h>
using namespace std;
int test, n;
string wear, cate;
map<string, int> m;

void solve(){
    int result = 1;
    for(auto it: m){
        result *= (it.second+1);
    }
    cout << result - 1 << "\n";
    m.clear();
}

int main(){
    cin >> test;

    if(test < 1){
        cout << 0;
        return 0;
    }

    for(int i = 0; i < test; i++){
        cin >> n;

        for(int j = 0; j < n; j++){
            cin >> wear >> cate;
            m[cate]++;
        }

        solve();
    }

    return 0;
}
