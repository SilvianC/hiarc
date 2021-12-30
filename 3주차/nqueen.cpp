#include <bits/stdc++.h>
using namespace std;
#define MAX 30

int N;
bool isUsed1[MAX]; // same row
bool isUsed2[MAX]; // same right arrow
bool isUsed3[MAX]; // same left arrow
int cnt = 0;

void solve(int level) {
    // level n 만족
    if(level == N){
        cnt++;
        return;
    }
    for(int i=0;i<N;i++){
        if(isUsed1[i] || isUsed2[i+level] || isUsed3[i - level + N -1]) continue;
        // 없으니 넣어줌
        isUsed1[i] = true;
        isUsed2[i+level] = true;
        isUsed3[i - level + N -1] = true;
        // 행 하나를 올림
        solve(level+1);
        // 안되는 경우의 수인 상태 -> 초기화 해줌
        isUsed1[i] = false;
        isUsed2[i+level] = false;
        isUsed3[i - level + N -1] = false;
    }

}

int main(){
    cin >> N;
    solve(0);
    cout << cnt;
}