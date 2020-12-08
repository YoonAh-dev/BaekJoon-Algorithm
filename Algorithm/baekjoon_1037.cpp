#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n[51];
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> n[i];
    }
    
    sort(n, n+num);
    cout << n[0] * n[num-1] << endl;
    return 0;
}
