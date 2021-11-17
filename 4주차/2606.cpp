#include <bits/stdc++.h>
#define MAX 100
using namespace std;

vector<int> arr[MAX];
bool visited[102];
int cnt = -1;
void dfs(int now) {
    if(visited[now]) return;
    visited[now] = true;
    cnt++;
    for(int i =0;i<arr[now].size();i++) {
        int nxt = arr[now][i];
        dfs(nxt);
    }
}
int main() {
    ios::sync_with_stdio(0);

    int n, m, s, t;
    cin >> n >> m;

    for(int i=0;i<m;i++) {
        cin >> s >> t;
        if(s>n||t>n)
            break;
        arr[s].push_back(t);
        arr[t].push_back(s);
    }
    dfs(1);
    cout << cnt << "\n";
    return 0;
}