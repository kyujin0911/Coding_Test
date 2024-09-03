#include<bits/stdc++.h>
using namespace std;

string s;

/*int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    sort(s.begin(), s.end());
    do{
        string temp = s;
        reverse(temp.begin(), temp.end());
        if(s == temp){
            cout << s;
            return 0;
        }
    }while(next_permutation(s.begin(), s.end()));
    cout << "I'm Sorry Hansoo";
    return 0;
}*/
/*int a[26];
vector<char> v;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for(char c: s) a[c-'A']++;
    if(s.size() % 2 == 0){
        for(int i = 25; i >= 0; i--){
            while(a[i]){
                v.insert(v.begin(), 'A'+i);
                v.push_back('A'+i);
                a[i] -= 2;
            } 
        }
    } else {
        for(int i = 25; i >= 0; i--){
            while(a[i]){
                if(a[i] == 1){
                    v.push_back('A');
                    a[i]--;
                } else {
                    
                }
            }
        }
    }
    for(char c: v){
        cout << c;
    }

    return 0;
}*/

int a[26];
string ret, temp;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL);
    cin >> s;
    for(char c: s) a[c-'A']++;
    for(int i = 25; i >= 0; i--){
        while(a[i]){
            if(a[i] == 1){
                ret.insert(ret.begin() + ret.length()/2, 'A'+i);
                a[i]--;
            } else {
            ret.insert(ret.begin(), 'A'+i);
            ret.push_back('A'+i);
            a[i] -= 2;
            }
        } 
    }

    temp = ret;
    reverse(temp.begin(), temp.end());
    if(temp == ret){
    for(char c: ret){
        cout << c;
    }
    } else {
        cout << "I'm Sorry Hansoo";
    }

    return 0;
}