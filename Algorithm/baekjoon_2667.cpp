#include <iostream>
#include <algorithm>

using namespace std;

int sizes, cnt = 0;
int totalDanJi = 0;
int map[25][25] = { 0 };
int cnts[625] = { 0 };

int dx[] = { 0, 1, 0, -1 };
int dy[] = { 1, 0, -1, 0 };

void dfs(int x, int y) {
    if (map[x][y] == 1) {
        map[x][y] = 0;
        cnt++;
        
        for (int i = 0; i < 4; i++) {
            int qx = x + dx[i];
            int qy = y + dy[i];
            
            if (qx >= 0 && qx < sizes && qy >= 0 && qy < sizes) {
                dfs(qx, qy);
            }
        }
    }
}

int main() {
    int index = 0;
    
    cin >> sizes;
    
    for (int i = 0; i < sizes; i++) {
        for (int j = 0; j < sizes; j++) {
            scanf("%1d", &map[i][j]);
        }
    }
    
    for (int i = 0; i < sizes; i++) {
        for (int j = 0; j < sizes; j++) {
            if (map[i][j] == 1) {
                totalDanJi++;
                dfs(i, j);
                cnts[index++] = cnt;
                cnt = 0;
            }
        }
    }
    
    printf("%d\n", totalDanJi);
    
    sort(cnts, cnts+totalDanJi);
    
    for (int i = 0; i < totalDanJi; i++) {
        printf("%d\n", cnts[i]);
    }
}
