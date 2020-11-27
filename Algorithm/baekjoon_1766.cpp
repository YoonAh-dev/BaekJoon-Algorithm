#include <iostream>
#include <queue>
#include <vector>
using namespace std;
typedef long long ll;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int degree[32001];
    vector<int> v[32001];
    priority_queue<int, vector<int>, greater<int>> pq;
    ll num, info;
    
    cin >> num >> info;
    
    while(info--) {
        int fp, sp;
        cin >> fp >> sp;
        v[fp].push_back(sp);
        degree[sp]++;
    }
    
    for (int i = 1; i <= num; i++) {
        if (!degree[i]) pq.push(i);
    }
    
    while(!pq.empty()) {
        int qtop = pq.top();
        pq.pop();
        cout << qtop << " ";
        for (auto min : v[qtop])
            if(--degree[min] == 0)
                pq.push(min);
    }
    cout << endl;
    
    return 0;
}
