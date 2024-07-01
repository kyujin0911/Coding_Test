#include<bits/stdc++.h>
using namespace std;
int a[9], sum = 0;
pair<int, int> p;
vector<int> result;

void solve(){
    for(int i = 0; i < 9; i++){
        for (int j = i + 1; j < 9; j++){
            if(sum - a[i] - a[j] == 100){
                p = {a[i], a[j]};
                return;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }

    solve();

    for(int i : a){
        if(p.first == i || p.second == i) continue;
        result.push_back(i);
    }
    sort(result.begin(), result.end());
    for(int i : result) cout << i << " ";
    return 0;
}
