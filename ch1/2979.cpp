#include<bits/stdc++.h>
using namespace std;
// 내가 푼 방법
/*int a, b, c, start, finish, total;
int duration[3][101];
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    scanf("%d %d %d", &a, &b, &c);

    for(int i = 0; i < 3; i++){
        scanf("%d %d", &start, &finish);
        for(int j = start; j < finish; j++){
            duration[i][j] = 1;
        }
    }

    for(int i = 0; i < 101; i++){
        int cnt = 0;
        for(int j = 0; j < 3; j++){
            if(duration[j][i] == 1) cnt++;
        }
        switch (cnt){
        case 1:
        total += a;
            break;
        case 2:
        total += (2*b);
            break;

        case 3:
        total += (3*c);
            break;
        
        default:
            break;
        }
    }

    cout << total;

    return 0;
}*/

// 모범 답안
int A, B, C, a, b, cnt[104], ret;
int main(){
    cin >> A >> B >> C;
    for(int i = 0; i < 3; i++){
        cin >> a >> b;
        for(int j = a; j < b; j++){
            cnt[j]++;
        }
    }

    for(int j = 1; j < 100; j++){
        if(cnt[j]){
            if(cnt[j]==1) ret += A;
            else if(cnt[j] == 2) ret += 2 * B;
            else if(cnt[j] == 3) ret += 3 * C;
        }
    }
    
    cout << ret;
}