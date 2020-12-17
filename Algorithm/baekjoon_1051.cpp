#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[51][51];
    int maxN = 1;
    int N, M;
    cin >> N >> M;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%1d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            int x1 = j, x2 = j+1, y1 = i, y2 = i+1;
            int res = 0, cnt = 1;
            while (x2 < M && y2 < N) {
                if (arr[y1][x1] == arr[y2][x1] && arr[y1][x1] == arr[y1][x2] && arr[y1][x1] == arr[y2][x2]) {
                    res = cnt;
                }
                x2++; y2++; cnt++;
            }
            res = (res != 0)? (res + 1) : res;
            maxN = max(maxN, res);
        }
    }
    
    cout << maxN * maxN << endl;
    return 0;
}
