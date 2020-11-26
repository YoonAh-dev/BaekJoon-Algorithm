#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

vector<long long> v;

long long findLength() {
    long long total = 0;
    
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v.size(); j++) {
            total += abs(v[i] - v[j]);
        }
    }
    return total;
}

int main() {
    int num;
    long long total;
    
    cin >> num;
    for (int i = 0; i < num; i++) {
        long long x;
        cin >> x;
        v.push_back(x);
    }
    total = findLength();
    cout << total << endl;
}
