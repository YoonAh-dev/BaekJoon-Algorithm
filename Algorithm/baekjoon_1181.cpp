#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<pair<int, string>> v;
    int num;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        string word;
        cin >> word;
        v.push_back(make_pair(word.length(), word));
    }
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        printf("%s\n", v[i].second.c_str());
    }
    
    return 0;
}
