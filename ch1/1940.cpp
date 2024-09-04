#include<bits/stdc++.h>
using namespace std;

int n, m, ret, a[100004];
map<int, int> mp;
int main(){
    int temp;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> temp;
        mp[temp] = temp;
        a[temp]++;
    }

    for(auto it: mp){
        if(a[it.second] && mp[m-it.second] != 0 && mp[it.second] != mp[m-it.second]){
            ret += 1;
            a[it.second] = 0;
            a[m-it.second] = 0;
        }
    }

    cout << ret;
    return 0;
}