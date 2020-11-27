#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    priority_queue<long long> pq;
    int n, m;
    long long num, answer = 0;
    
    cin >> n >> m ;
    while (n--) {
        cin >> num;
        pq.push(-num);
    }
    
    while (m--) {
        long long first = -pq.top();
        pq.pop();
        long long second = -pq.top();
        pq.pop();
        long long sum = first + second;
        pq.push(-sum);
        pq.push(-sum);
    }
    
    while (!pq.empty()) {
        answer += (-pq.top());
        pq.pop();
    }
    cout << answer << endl;
    return 0;
}
