#include<bits/stdc++.h>
using namespace std;
int N, K, maxi;
int tempa[100004];
int psum[100004];
int main(){
    cin >> N >> K;
    for(int i = 1; i <= N; i++){
        cin >> tempa[i];
        psum[i] = tempa[i] + psum[i - 1];
    }

    maxi = psum[K] - psum[0];

    for(int i = K+1; i <= N; i++){
        int sum = psum[i] - psum[i - K];
        if(sum > maxi) maxi = sum;
    }

    cout << maxi;
}