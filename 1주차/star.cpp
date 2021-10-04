#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N - i; j++)
			cout << ' ';
		// 첫번째 줄 1, 3, 5, .. 2i-1 개
		for (int j = 1; j <= 2 * i - 1; j++)
			cout << "*";
		// N-i 공백이 i번째 줄에 존재
		cout << "\n";
	}
		
	return 0;
}