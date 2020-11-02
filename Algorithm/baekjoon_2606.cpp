#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> nodes[101];
    queue<int> q;
    bool entered[101];
    int comNum, netNum, count = 0;
    
    cin >> comNum >> netNum;
    
    for (int i = 0; i < netNum; i++) {
        int n, m;
        
        cin >> n >> m;
        nodes[n].push_back(m);
        nodes[m].push_back(n);
    }
    entered[1] = true;
    q.push(1);
    
    while (!q.empty()) {
        int n = q.front();
        q.pop();
        
        for (int i = 0; i < nodes[n].size(); i++) {
            int j = nodes[n][i];
            
            if(entered[j] == false) {
                entered[j] = true;
                q.push(j);
            }
        }
    }
    
    for (int i = 1; i <= comNum; i++) {
        if (entered[i] == true)
            count++;
    }
    
    cout << count - 1 << endl;
}
