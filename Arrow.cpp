#include <bits/stdc++.h>
using namespace std;

unsigned int tall[100002];

int main() {
    int n;  
    int cnt = 0;
    // 봉우리 수 
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> tall[i];
    // 봉우리 수 간의 비교 
    for(int i=0;i<n;i++) {
        int num = 0;
        for(int j = i+1;j<n;j++)
            if(tall[i] > tall[j])
                num++;
            else 
                break;
            // CNT 값이 마지막에 교체될때를 간과하면 안됨
            cnt = max(cnt,num);
    }
    cout << cnt << "\n";
}