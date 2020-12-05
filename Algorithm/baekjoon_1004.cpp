#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, m, T;
    int dp[33][33] = { 0 };
    
    cin >> T;
    while (T--) {
        cin >> n >> m;
        
        for (int i = 0; i <= m; i++) {
            dp[1][i] = i;
        }
        
        for (int i = 2; i <= n; i++) {
            for (int j = 2; j <= m; j++) {
                dp[i][j] = dp[i-1][j-1] + dp[i][j-1];
            }
        }
        cout << dp[n][m] << endl;
    }
}
