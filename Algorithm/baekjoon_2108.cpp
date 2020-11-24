#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    vector<int> v;
    vector<pair<int, int>> f;
    int freqs[8001] = { 0 }, max = -9999, max_val;
    long long num;
    double total = 0;
    bool not_first = false;
    
    cin >> num;
    
    for (long long i = 0; i < num; i++) {
        int n;
        cin >> n;
        v.push_back(n);
        total += n;
        freqs[n + 4000]++;
    }
    
    for (int i = 0; i < 8001; i++) {
        if (freqs[i] != 0){
            if (freqs[i] == max) {
                if (not_first) {
                    max_val = i - 4000;
                    not_first = false;
                }
            }
            if (freqs[i] > max) {
                max = freqs[i];
                max_val = i - 4000;
                not_first = true;
            }
        }
    }
    
    sort(v.begin(), v.end());
    
    cout << round(total/num) << endl;
    cout << v[num / 2] << endl;
    cout << max_val << endl;
    if (num == 1) {
        cout << "0" << endl;
    }
    else {
        cout << v[num - 1] - v[0] << endl;
    }
}
