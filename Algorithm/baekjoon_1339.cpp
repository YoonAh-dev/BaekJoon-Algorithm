#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    priority_queue<int> q;
    map <char, int> m;
    int cnt = 9;
    int result = 0;
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        string str;
        cin >> str;
        int cur = 1;
        for (int j = str.size()-1; j >= 0; j--) {
            m[str[j]] += cur;
            cur *= 10;
        }
    }
    
    map<char, int> :: iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
        q.push(iter->second);
    
    while (!q.empty()) {
        result += q.top() * cnt;
        q.pop();
        cnt--;
    }
    
    cout << result << endl;
}
