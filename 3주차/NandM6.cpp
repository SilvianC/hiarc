#include <bits/stdc++.h>
#define MAX 9
using namespace std;

int n, m;
// 숫자 배열 선언
bool isUsed[MAX];
int answer[MAX];
int num[MAX];
void solve(int level, int label) {
    if(level == m) {
        // 중복이 아니라 오름차순으로 출력 해야 함
        // num의 인덱스로 접근 할꺼임
        for(int i=0;i<m;i++)
            cout << answer[i] << ' ';
        cout << "\n";
        return;
    }
    // index label로 지정하여 시작 중복을 제외시킴
    for(int i=label;i<n;i++){
        if(!isUsed[i]) {
            isUsed[i] = true;
            answer[level] = num[i];
            solve(level+1,i);
            isUsed[i] = false;
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
    solve(0,0);
}