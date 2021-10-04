#include <bits/stdc++.h>
using namespace std;

// pair로 된 구조체 or vector 필요함(정렬 함수 사용하기 때문)
    typedef struct pair {
        unsigned int st;
        unsigned int fin;
    } Conf;

// 끝에 순서에 따라 회의 구조체 정렬하기 위해 맞는 bool 함수 정의
bool Compare(Conf& n1,Conf& n2) {
    if(n1.fin == n2.fin)
        return n1.st < n2.st;
    else
        return n1.fin < n2.fin; 
}

int main() {
    int n;
    cin >> n;
    
    // 구조체 배열 정의
    Conf arr[100000];

    // 구조체 입력 받음
    for(int i=0;i<n;i++) 
    cin >> arr[i].st >> arr[i].fin;

    // sort 함수를 이용하여 끝나는 시간에 대해서 정렬
    sort(arr,arr+n,Compare);

    int cnt = 1;
    // 시간을 끝시간으로 초기화
    unsigned int time = arr[0].fin;
        
    // array 처음은 arr[0]가 입력 되어 있으므로 1부터 시작
    // 겹치지 않는 최대 개수 고르기
    for(int i=1;i<n;i++) {
        
        // 해당되는start 시간이 finish 시간보다 같거나 커야 한다.
        if(time <= arr[i].st) {
            time = arr[i].fin;
            cnt++;   
        }
    }
    cout << cnt << "\n";       
}