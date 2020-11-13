#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int nodeSize;
int ans = 0, endpos = 0;
vector<pair<int, int>> node[10002];
bool entered[10002];

void dfs(int n, int l) {
    if(entered[n]) return ;
    
    entered[n] = true;
    if (ans < l){
        ans = l;
        endpos = n;
    }
    
    for (int i = 0; i < node[n].size(); i++) {
        dfs(node[n][i].first, l + node[n][i].second);
    }
}

int main() {
    cin >> nodeSize;
    
    int parent, child, length;
    for (int i = 1; i < nodeSize; i++) {
        cin >> parent >> child >> length;
        
        node[parent].push_back(make_pair(child, length));
        node[child].push_back(make_pair(parent, length));
    }
    
    dfs(1, 0);
    
    ans = 0;
    memset(entered, 0, sizeof(entered));
    
    dfs(endpos, 0);
    
    cout << ans << endl;
    
    return 0;
}
