#include<bits/stdc++.h>
using namespace std;

int N;
string s[154];
int cnt[26];
string result;

int main(){
    cin >> N;
    for(int i = 0; i < N; i++){
        cin >> s[i];
        cnt[s[i][0] - 97]++;
    }

    for(int i = 0; i < 26; i++){
        if(cnt[i] > 5){
            result += (97+i);
        }
    }

    if(result.size() > 0){
        sort(result.begin(), result.end());
        cout << result;
    } else {
        cout << "PREDAJA";
    }
   
}