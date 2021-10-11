#include <bits/stdc++.h>
using namespace std;

int pipe[1002];
int tape[1002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, l;
    int num = 0;
    cin >> n >> l;

    for(int i=0;i<n;i++) 
        cin >> pipe[i];
    // pipe들을 오름차순으로 정리
    sort(pipe,pipe+n);
    // 해당 위치부터 l까지의 거리까지 테이프를 붙임
    for(int i=0;i<n;i++){
        // 해당 tape의 위치가 존재할때 0에서 값을 바꿔줌 -> !이용
        if(!tape[pipe[i]]){
             // 해당 위치부터 l까지 1000을 넘지 않는 공간에 한해 테이프를 붙여줌
             for(int j = pipe[i]; j < min(pipe[i]+l,10002);j++)
                 tape[j] = 1;
            num++;
        }
            }
    cout << num << "\n";
}