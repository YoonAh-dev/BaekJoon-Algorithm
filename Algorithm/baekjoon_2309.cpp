#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int heights[9];
    int sum = 0;
    bool isFound = false;
    
    for (int i = 0; i < 9; i++) {
        cin >> heights[i];
        sum += heights[i];
    }
    
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 9; j++) {
            if((i != j) && (sum - (heights[i] + heights[j]) == 100)) {
                heights[i] = 0; heights[j] = 0;
                isFound = true;
                break;
            }
        }
        if(isFound == true) break;
    }
    
    sort(heights, heights+9);
    for (int i = 0; i < 9; i++) {
        if(heights[i] != 0)
            cout << heights[i] << endl;
    }
}
