#include <bits/stdc++.h>
using namespace std;

int fac(int n) {
    if(n == 0)
        return 1;
    else
        return n * fac(n-1);
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    cout << fac(n);
}