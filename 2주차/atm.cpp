#include <bits/stdc++.h>
using namespace std;

int num[1000];

int main() {
    // 사람의 수    
    int n;
    cin >>n;
    // 인출시간 입력
    for(int i=0;i<n;i++)
    cin >> num[i];
    sort(num,num+n);
    int n_sum = 0;
    int sum = 0;
    // for range loop의 경우 모든 원소를 돌고 싶을 때 사용 
    // 아니면 break 문 작성
    for(auto c:num) {
        // 해당 전까지의 sum과 해당배열원소를 더함
        sum += c;
        // 최종 구해야 하는 값에 더해줌
        n_sum += sum;
        n--;
        
        if(n==0)
        break;
    }
    cout << n_sum << "\n";
}