#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int main() {
    int num, cnt = 0;
    vector<pair<int, int>> time;
    queue<pair<int, int>> que;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        int startT, endT;
        cin >> startT >> endT;
        time.push_back(make_pair(endT, startT));
    }
    
    sort(time.begin(), time.end());
    
    for (int i = 0; i < num; i++) {
        que.push(make_pair(time[i].first, time[i].second));
    }
    
    while (!que.empty()) {
        int first = que.front().first;
        que.pop();
        cnt++;
        if (que.empty()) break;
        while (first > que.front().second) {
            que.pop();
            if (que.empty()) break;
        }
    }
    
    cout << cnt << endl;
}
