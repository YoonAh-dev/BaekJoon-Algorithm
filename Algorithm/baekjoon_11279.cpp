#include <iostream>
#include <queue>
using namespace std;

int num;
priority_queue<int> pq;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin >> num;
    
    while(num--) {
        int n;
        cin >> n;
        if (n == 0) {
            if (pq.empty()) {
                cout << 0 << "\n";
            }
            else {
                cout << pq.top() << "\n";
                pq.pop();
            }
        }
        else {
            pq.push(n);
        }
    }
    return 0;
}
