#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    // 거스름돈 정의
    int ch =0;
    cin >> n;
    // 1000에서 나머지 값
    n = 1000 - n;

    int money[6] = {500,100,50,10,5,1};
    for(int i=0;i<5;i++) {
            if(n/money[i]) {
                ch+=n/money[i];
                n%=money[i];
            }
        }
        ch += n;
    cout << ch << "\n";
}