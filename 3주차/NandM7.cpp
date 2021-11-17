#include <bits/stdc++.h>
#define MAX 9
using namespace std;

int n, m;
// 숫자 배열 선언
bool isUsed[MAX];
int answer[MAX];
int num[MAX];
void solve(int level) {
    if(level == m) {
        for(int i=0;i<m;i++)
            cout << answer[i] << ' ';
        cout << "\n";
        return;
    }
    
    for(int i=0;i<n;i++){
        // num으로 숫자를 넣으면 해결
            isUsed[i] = true;
            answer[level] = num[i];
            solve(level+1);
            isUsed[i] = false;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> num[i];
    sort(num,num+n);
    solve(0);
}