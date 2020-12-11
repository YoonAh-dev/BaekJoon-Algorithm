#include <iostream>
#include <cstring>
#include <algorithm>

#define MAX 1000

using namespace std;

char str1[MAX + 2], str2[MAX + 2];
int dp[MAX + 1][MAX + 1];

int main() {
    int i, j;
    
    cin >> str1 + 1 >> str2 + 1;
    
    for (i = 1; str1[i]; i++) {
        for (j = 1; str2[j]; j++) {
            dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + (str1[i] == str2[j]) });
        }
    }
    
    printf("%d\n", dp[i - 1][j - 1]);
}
