#include <bits/stdc++.h>
using namespace std;

long long dp[100];
int fibo(int n){
    if(dp[n] != -1) return dp[n];
    else 
        return dp[n] = fibo(n-1) + fibo(n-2);
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    dp[0] = 0;
    dp[1]= 1;
    cout << fibo(n) << endl;
}