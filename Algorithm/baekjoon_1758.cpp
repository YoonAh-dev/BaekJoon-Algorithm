#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int num, won;
    long long sum = 0;
    vector<int> tips;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        int tip;
        cin >> tip;
        tips.push_back(tip);
    }
    
    sort(tips.rbegin(), tips.rend());
    
    for (int i = 0; i < num; i++) {
        won = tips[i] - i;
        if (won >= 0)
            sum += won;
    }
    
    cout << sum << endl;
}
