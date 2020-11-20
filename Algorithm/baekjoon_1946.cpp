#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int testcase, num, cnt;
vector<pair<int, int>> recruiter;
queue<pair<int, int>> q;

void recruiting() {
    for (int i = 0; i < num; i++) {
        int doc, interview;
        cin >> doc >> interview;
        recruiter.push_back(make_pair(doc, interview));
    }
    
    sort(recruiter.begin(), recruiter.end());
    
    for (int i = 0; i < num; i++) {
        q.push(make_pair(recruiter[i].first, recruiter[i].second));
    }
    
    int first = q.front().first;
    int second = q.front().second;
    while (!q.empty()) {
        if (first > q.front().first) first = q.front().first;
        if (second > q.front().second) second = q.front().second;
        q.pop();
        cnt++;
        if (q.empty()) break;
        while (first < q.front().first && second < q.front().second) {
            q.pop();
            if (q.empty()) break;
        }
    }
    
    cout << cnt << endl;
}

int main() {
    cin >> testcase;
    
    while(testcase--) {
        cnt = 0;
        cin >> num;
        recruiting();
        recruiter.clear();
    }
}
