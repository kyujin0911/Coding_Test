#include<bits/stdc++.h>
using namespace std;

string s;
int mid, result = 1;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> s;

    mid = s.length() / 2;
    
    for(int i = 0; i < mid; i++){
        cout << s[i] << " " << s[s.length()-1-i] << "\n";
        if(s[i] != s[s.length()-1-i]){
            cout << 0;
            return 0;
        } 
    }
    cout << 1;
}