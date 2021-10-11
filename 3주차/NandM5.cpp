#include <bits/stdc++.h>
#define MAX 9
using namespace std;

int n, m;
// 숫자 배열 선언
bool isUsed[];
int answer[MAX];
int num[MAX];
void solve(int level) {
    if(level == m) {
        for(int i=0;i<m;i++)
            cout << answer[i] << ' ';
        cout << "\n";
        return;
    }
    // 같은 수를 출력할 수 있다는 점이 다름
    for(int i=0;i<n;i++){
        if(!isUsed[i]) {
            isUsed[num[i]] = true;
            answer[level] = num[i];
            solve(level+1);
            isUsed[num[i]] = false;
        }
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