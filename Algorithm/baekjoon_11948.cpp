#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int scores[6], maxNum = 0;
    
    for (int i = 0; i < 6; i++) {
        cin >> scores[i];
    }
    
    sort(scores, scores+4);
    
    if (scores[4] > scores[5]) maxNum = scores[4];
    else maxNum = scores[5];
    
    cout << scores[1] + scores[2] + scores[3] + maxNum << endl;
}
