#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int row, col, pos;
int map[50][50] = { 0 };
bool entered[50][50];

int dx[] = {0, 1, 0, -1};
int dy[] = {1, 0, -1, 0};

void init() {
    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            map[i][j] = 0;
        }
    }
}

void dfs(int px, int py) {
    if (map[px][py] == 1) {
        map[px][py] = 0;
        for (int i = 0; i < 4; i++) {
            int qx = dx[i] + px;
            int qy = dy[i] + py;
            if (qx >= 0 && qy >= 0 && qx < row && qy < col)
                dfs(qx, qy);
        }
    }
}

int main() {
    int testCase;
    cin >> testCase;
    
    while (testCase--) {
        int count = 0;
        int px, py;
        init();
        
        cin >> row >> col >> pos;
        for (int i = 0; i < pos; i++) {
            cin >> px >> py;
            map[px][py] = 1;
        }
        
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (map[i][j] == 1) {
                    count++;
                    dfs(i, j);
                }
            }
        }
        
        cout << count << endl;
    }
    
    return 0;
}
