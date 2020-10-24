#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int towerNum = 0, towerHeight;
    stack<pair<int, int>> heightTower;
    
    cin >> towerNum;
    
    for (int i = 0; i < towerNum; i++) {
        cin >> towerHeight;
        
        while (!heightTower.empty()) {
            if (towerHeight < heightTower.top().second) {
                cout << heightTower.top().first << " ";
                break;
            }
            
            heightTower.pop();
        }
        
        if (heightTower.empty()) {
            cout << 0 << " ";
        }
        
        heightTower.push(make_pair((i+1), towerHeight));
    }
    
    return 0;
}
