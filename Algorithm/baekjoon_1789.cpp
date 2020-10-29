#include <iostream>

using namespace std;

int main() {
    long n, count = 1, sum = 0;
    
    cin >> n;
    
    while(1) {
        sum += count;
        if (n < sum) break;
        count++;
    }
    
    cout << count-1 << endl;
}
