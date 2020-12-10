#include <iostream>
using namespace std;

int main() {
    int num, cnt = 0, i = 0;
    cin >> num;
    
    while(1) {
        bool isSame = false;
        
        for (int j = 0; j <= 1000; j++) {
            if (num < (3 * i) + (5 * j)) break;
            if (num == (3 * i) + (5 * j)) {
                isSame = true;
                cnt = i + j;
                break;
            }
        }
        
        if (isSame == true) break;
        
        if (num < 3 * i) {
            cnt = -1;
            break;
        }
        else i++;
    }
    
    cout << cnt << endl;
}
