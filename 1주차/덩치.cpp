#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int height[52] = { };
	int weight[52] = { };
	
	// 사람 수 입력 
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> weight[i] >> height[i];

	for (int i = 0; i < n; i++) {
		int rank = 1;
		for (int j = 0; j < n; j++) {
			if (height[i] < height[j] && weight[i] < weight[j]) {
				rank++;
			}
		}
		cout << rank << ' ';
	}
	return 0;
}