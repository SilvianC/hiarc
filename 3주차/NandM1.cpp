#include <bits/stdc++.h>
#define MAX 9
using namespace std;

// 전역변수로 선언해야 해당 재귀함수에서 똑같이 사용가능하기 때문에 정의해줌
int n,m;
bool isUsed[MAX];
int answer[MAX];  
// 함수 solve는 출력 방식이 목적이기 때문에 반환하는 return 값은 없음.
void solve(int level,int label) {
    // m개의 level 만큼 answer의 배열이 만들어 졌을 때 출력
    if(level == m) {
        for(int i=0;i<m;i++)
            cout << answer[i] << ' ';
        cout << "\n";
        return;
    }
    // label의 매개 변수를 넣어 주어서 무엇을 골랐는지 확인 할 수 있도록 함.
    for(int i=label;i<=n;i++) {
        
        if(!isUsed[i]){
            // 함수 solve 를 재귀방식을 이용하여 level == m 일경우 출력하도록 바꿔놓음
            // 출력이 안될시 isUsed 함수가 돌아가게 놓음
            isUsed[i] = true;
            answer[level] = i;
            solve(level+1, i);
            isUsed[i] = false;
        }
    }
}
int main() {
    // 전역변수를 cin으로 입력받음
    cin >> n >> m;
    solve(0,1);
}