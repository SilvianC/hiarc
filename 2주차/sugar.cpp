#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 설탕 Kg 주어짐
    int n;
    int num = 0;
    cin >>n;
    while(n>=0) {
        if(n%5 == 0) {
            num += n/5;
            cout << num << "\n";
            return 0;
        }
        n -= 3;
        num++;
    }
    cout << "-1" << "\n";
}