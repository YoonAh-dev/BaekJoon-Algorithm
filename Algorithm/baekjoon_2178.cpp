#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int row, col;
int maze[100][100] = { 0 };
int cnt[100][100] = { 0 };
bool entered[100][100];

int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};

void bfs(int x, int y) {
    entered[x][y] = true;
    cnt[x][y]++;
    
    queue<pair<int, int>> q;
    q.push({x, y});
    while(!q.empty()) {
        int n = q.front().first;
        int m = q.front().second;
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int nx = n + dx[i];
            int ny = m + dy[i];
            
            if(nx >= 0 && nx < row && ny >= 0 && ny < col && !entered[nx][ny] && maze[nx][ny] == 1) {
                entered[nx][ny] = true;
                q.push({nx, ny});
                cnt[nx][ny] = cnt[n][m] + 1;
            }
        }
    }
}

int main() {
    cin >> row >> col;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%1d", &maze[i][j]);
        }
    }
    
    bfs(0, 0);
    
    cout << cnt[row-1][col-1] << endl;
    
    return 0;
}
