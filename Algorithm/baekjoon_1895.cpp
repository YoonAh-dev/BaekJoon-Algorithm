#include <iostream>
#include <algorithm>

using namespace std;

int rows, cols, t;
int images[41][41];
int dx[] = {-1, 0, 1, -1, 0, 1, -1, 0, 1};
int dy[] = {-1, -1, -1, 0, 0, 0, 1, 1, 1};

int filter() {
    int cnt = 0;
    int num[9] = { 0 };
    
    for (int i = 1; i < rows - 1; i++) {
        for (int j = 1; j < cols - 1; j++) {
            for (int k = 0; k < 9; k++) {
                int qx = i + dx[k];
                int qy = j + dy[k];
                num[k] = images[qx][qy];
            }
            sort(num, num+9);
            if (num[4] >= t) cnt++;
        }
    }
    
    return cnt;
}

int main() {
    cin >> rows >> cols;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> images[i][j];
        }
    }
    cin >> t;
    
    cout << filter() << endl;
}
