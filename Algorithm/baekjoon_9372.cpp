#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> map[1001];
int num;
int N, M;

int bfs(int start) {
    bool entered[1001] = {false, };
    queue<int> q;
    int cnt = 0;
    
    entered[start] = true;
    q.push(start);
    
    while(!q.empty()) {
        int n = q.front();
        q.pop();
        
        for (int i = 0; i < map[n].size(); i++) {
            int j = map[n][i];
            
            if (entered[j] == false) {
                entered[j] = true;
                q.push(j);
                cnt++;
            }
        }
    }
    
    for (int i = 1; i <= N; i++) {
        map[i].clear();
    }
    return cnt;
}

int main() {
    cin >> num;
    
    while(num--) {
        cin >> N >> M;
        
        for (int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            map[a].push_back(b);
            map[b].push_back(a);
        }
        
        cout << bfs(1) << endl;
    }
}
