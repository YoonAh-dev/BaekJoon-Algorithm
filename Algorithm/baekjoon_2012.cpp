#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    long long num, angry = 0;
    vector<int> v;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        int rank;
        cin >> rank;
        v.push_back(rank);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        angry += abs(v[i] - (i + 1));
    }
    
    cout << angry << endl;
}
