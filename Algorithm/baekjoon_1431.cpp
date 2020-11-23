#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int sum(string a) {
    int len = a.length();
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] - '0' <= 9 && a[i] - '0' >= 0) {
            sum += a[i] - '0';
        }
    }
    return sum;
}

bool compare(string a, string b) {
    if (a.length() < b.length()) {
        return 1;
    }
    else if (a.length() > b.length()) {
        return 0;
    }
    else {
        int sum1 = sum(a);
        int sum2 = sum(b);
        if (sum1 < sum2) {
            return 1;
        }
        else if (sum1 > sum2) {
            return 0;
        }
        else {
            return a < b;
        }
    }
}

int main() {
    int num;
    vector<string> v;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        string word;
        cin >> word;
        v.push_back(word);
    }
    
    sort(v.begin(), v.end(), compare);
    
    for (int i = 0; i < num; i++) {
        cout << v[i] << endl;
    }
}
