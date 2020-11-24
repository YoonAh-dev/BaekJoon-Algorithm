#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int material;
    long long num;
    vector<int> v;
    int index, cnt = 0;
    cin >> material >> num;
    
    for (int i = 0; i < material; i++) {
        int mat_num;
        cin >> mat_num;
        v.push_back(mat_num);
    }
    
    sort(v.begin(), v.end());
    
    for (index = 0; index < v.size(); index++) {
        if (v[index] >= num) break;
    }
    
    v.erase(v.begin()+index, v.end());
    
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == num) cnt++;
        }
    }
    
    cout << cnt << endl;
    
    return 0;
}
