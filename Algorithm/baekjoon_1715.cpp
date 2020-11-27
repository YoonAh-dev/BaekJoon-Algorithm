#include <iostream>
#include <queue>
typedef long long ll;
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    priority_queue<ll> pq;
    ll num, cnt = 0;
    
    cin >> num;
    
    while(num--) {
        int n;
        cin >> n;
        pq.push(-n);
    }
    
    while(!pq.empty()) {
        if (pq.size() == 1) {
            cout << cnt << endl;
            break;
        }
        else {
            ll first = -pq.top(); pq.pop();
            ll second = -pq.top(); pq.pop();
            ll sum = first + second;
            pq.push(-sum);
            cnt += sum;
        }
    }
    
    return 0;
}
