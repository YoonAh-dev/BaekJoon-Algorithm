#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> v(n);
    
    for (int i = 0; i < v.size(); i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end());
    
    int m;
    cin >> m;
    vector<bool> result(m);
    
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        result[i] = binary_search(v.begin(), v.end(), temp);
    }
    
    for (int i = 0; i < m; i++) {
        cout << result[i] << " ";
    }
    
    return 0;
}
