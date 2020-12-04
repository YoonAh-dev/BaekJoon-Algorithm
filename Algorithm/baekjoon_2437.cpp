#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    vector<ll> v;
    int num, sum = 0;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        ll n;
        cin >> n;
        v.push_back(n);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i <= v.size(); i++) {
        if (v[i] > sum + 1) break;
        sum += v[i];
    }
    
    cout << sum + 1 << endl;
}
