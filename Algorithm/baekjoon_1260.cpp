#include <iostream>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> nodes[1001];
queue<int> q;
stack<int> s;
bool entered_dfs[1001];
bool entered_bfs[1001];
int node, edge, startNode;

void dfs() {
    s.push(startNode);
    
    while (!s.empty()) {
        int n = s.top();
        
        if(entered_dfs[n] == true) {
            s.pop();
            continue;
        }
        else {
            s.pop();
            cout << n << " ";
            entered_dfs[n] = true;
        }
        
        for (int i = nodes[n].size() - 1; i >= 0; i--) {
            int m = nodes[n][i];
            
            if (entered_dfs[m] == false) s.push(m);
        }
    }
    cout << endl;
}

void bfs() {
    q.push(startNode);
    
    while (!q.empty()) {
        int n = q.front();
        
        if (entered_bfs[n] == true) {
            q.pop();
            continue;
        }
        else {
            q.pop();
            cout << n << " ";
            entered_bfs[n] = true;
        }
        
        for (int i = 0; i < nodes[n].size(); i++) {
            int j = nodes[n][i];
            
            if (entered_bfs[j] == false) {
                q.push(j);
            }
        }
    }
    cout << endl;
}

int main() {
    cin >> node >> edge >> startNode;
    
    for (int i = 0; i < edge; i++) {
        int n, m;
        cin >> n >> m;
        nodes[n].push_back(m);
        nodes[m].push_back(n);
    }
    
    for (int i = 0; i <= node; i++) {
        sort(nodes[i].begin(), nodes[i].end());
    }
    
    dfs();
    bfs();
}
