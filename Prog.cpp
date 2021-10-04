#include <bits/stdc++.h>
using namespace std;

int si[100002];
int gi[5000];

int main() {
    int n;
    int min = INT32_MAX;
    cin >> n;
    for(int i=0;i<2*n;i++)
    cin >> si[i];
   // 입력된 student 능력을 정렬 
    sort(si,si+(2*n));
    // 그룹내 코딩 능력 합해줌
    for(int i=0;i<n;i++)
    gi[i] = si[i] + si[2*n-i-1];
    // 그룹 간 합 비교해서 최소값 출력
    for(int i=0;i<n;i++) {
         if(min >= gi[i])
         min = gi[i];
    }
    cout << min << "\n";
    
    return 0;
}