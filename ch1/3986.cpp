#include<bits/stdc++.h>
using namespace std;
int n, cnt[2], ret, flag;
string s;
string tmp;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){ 
        cin >> s;
        
        for(int j = 0; j < s.length(); j++){
            for(int k = j + 1; k < s.length(); k++){
                if(s[j] == s[k]){
                    s.erase(j);
                    s.erase(j);
                }
            }
        }

        if(s.empty()){
            ret++;
        }
    }

    cout << ret;
    return 0;
}