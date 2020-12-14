#include <iostream>
using namespace std;

int aArray[51][51], bArray[51][51];
int cnt = 0;

void inputArray(int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%1d", &aArray[i][j]);
        }
    }
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%1d", &bArray[i][j]);
        }
    }
}

void equalChange(int n, int m) {
    for (int i = n; i <= n+2; i++) {
        for (int j = m; j <= m+2; j++) {
            aArray[i][j] = 1 - aArray[i][j];
        }
    }
}

void equalTest(int rows, int cols) {
    bool flag = false;
    
    for (int i = 0; i< rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (aArray[i][j] != bArray[i][j]) {
                cnt = -1;
                flag = true;
                break;
            }
        }
        if (flag) break;
    }
    
    cout << cnt << endl;
}

void equalAtoB(int rows, int cols) {
    for (int i = 0; i < rows-2; i++) {
        for (int j = 0; j < cols-2; j++) {
            if (aArray[i][j] != bArray[i][j]) {
                equalChange(i, j);
                cnt++;
            }
        }
    }
}

int main() {
    int rows, cols;
    cin >> rows >> cols;
    
    inputArray(rows, cols);
    
    equalAtoB(rows, cols);
    
    equalTest(rows, cols);
    
    return 0;
}
