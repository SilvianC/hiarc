#include <bits/stdc++.h>
using namespace std;
   


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    int price[10];
    int num = 0;
    
    cin >> n >> k;
    // 동전 A(i)의 가치는 전의 수 A(i-1)의 배수
    for(int i=0;i<n;i++)
    cin >> price[i];

    // 몫과 나머지를 나누어서 k 값을 정리만 하면 됨
    // 따로 break 문을 설정할 필요도 없음
    for(int i= n-1;i>=0;i--) {
     num += k/price[i];
     k %=price[i];`
    }
   cout << num << "\n";
}