#include <bits/stdc++.h>
#define MAX 9
using namespace std;

int n, m;
bool isUsed[MAX];
int answer[MAX];
void solve(int level, int label) {
    if(level == m) {
        for(int i=0;i<m;i++)
            cout << answer[i] << ' ';
        cout << "\n";
        return;
    }
    // 같은 수를 출력할 수 있다는 점이 다름
    for(int i=label;i<=n;i++){
            isUsed[i] = true;
            answer[level] = i;
            solve(level+1,i);
            isUsed[i] = false;
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    solve(0,1);
}