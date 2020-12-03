#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

char chess[8][8];
char map[60][60];

int solve() {
    int countWB = 0;
    int countBW = 0;
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0 && chess[i][j] == 'W') ++countBW;
            if ((i + j) % 2 == 1 && chess[i][j] == 'B') ++countBW;
            if ((i + j) % 2 == 0 && chess[i][j] == 'B') ++countWB;
            if ((i + j) % 2 == 1 && chess[i][j] == 'W') ++countWB;
        }
    }
    
    return  min(countWB, countBW);
}

void input(int x, int y) {
    for (int i = 0; i < 8; ++i) {
        for (int j = 0 ; j < 8; ++j) {
            chess[i][j] = map[x+i][y+j];
        }
    }
}

int main() {
    int rows, cols;
    int minChange = 987654321;
    
    cin >> rows >> cols;
    memset(map, 0, sizeof(map));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> map[i][j];
        }
    }
    
    for (int i = 0; i <= rows - 8; i++) {
        for (int j = 0; j <= cols - 8; j++) {
            input(i, j);
            minChange = min(minChange, solve());
        }
    }
    
    cout << minChange << endl;
    
    return 0;
}
