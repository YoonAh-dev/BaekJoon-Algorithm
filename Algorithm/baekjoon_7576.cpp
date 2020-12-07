#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int rows, cols;
int cnt = 0;
int map[1001][1001];

queue<pair<int, int>> q;

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void bfs() {
    while (!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        
        q.pop();
        
        for (int i = 0; i < 4; i++) {
            int qx = x + dx[i];
            int qy = y + dy[i];
            
            if (qx <= 0 || qx > cols || qy <= 0 || qy > rows)
                continue;
            if (map[qx][qy] == 0) {
                map[qx][qy] = map[x][y] + 1;
                q.push(make_pair(qx, qy));
            }
        }
    }
}


int main() {
    cin >> rows >> cols;
    
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= rows; j++) {
            cin >> map[i][j];
            if (map[i][j] == 1)
                q.push(make_pair(i, j));
        }
    }
    
    bfs();
    
    for (int i = 1; i <= cols; i++) {
        for (int j = 1; j <= rows; j++) {
            if (map[i][j] == 0) {
                cout << "-1" << endl;
                return 0;
            }
            
            if (cnt < map[i][j])
                cnt = map[i][j];
        }
    }
    cout << cnt-1 << endl;
    
    return 0;
}
