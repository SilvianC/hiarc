#include <bits/stdc++.h>
#define MAX 102
using namespace std;

int n;
char mat[MAX][MAX];
bool visited[MAX][MAX];

// x,y 값에 대한 설정
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
void dfs(int x, int y) {
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        // 해당 위치에 access 할 수 없는 경우
        if(nx<0||nx>=n||ny<0||ny>=n)  continue;
        // 같은 것일 때 dfs하도록 해줌
        if(!visited[nx][ny]&& mat[nx][ny] == mat[x][y]){
            visited[nx][ny] = true;
            dfs(nx,ny);
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0;i<n;i++)
        cin >> mat[i];

    int cnt_person = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(!visited[i][j])
            cnt_person++;
            visited[i][j] = true;
            dfs(i,j);
        }

    //  변환시켜줌
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) {
            if(mat[i][j] == 'G') mat[i][j] = 'R';
        }
        
    memset(visited,false,sizeof(visited));

    int cnt_blind = 0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(!visited[i][j])
            cnt_blind++;
            visited[i][j] = true;
            dfs(i,j);
        }
    cout << cnt_person << ' ' << cnt_blind << '\n';
}