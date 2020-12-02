#include <iostream>
using namespace std;

int main() {
    int n, temp, k = 1;
    int countArr[10001] = {0,};
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &temp);
        countArr[temp]++;
    }
    
    for (int i = 1; i < 10001; i++) {
        countArr[i] += countArr[i-1];
    }
    
    while(1) {
        if (k > 10000) break;
        if (countArr[k] > countArr[k-1]) {
            printf("%d\n", k);
            countArr[k-1]++;
        }
        else
            k++;
    }
}
