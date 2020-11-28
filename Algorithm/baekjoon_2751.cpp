#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<long long> v;
    long long num;
    scanf("%lld", &num);
    
    while(num--) {
        long long n;
        scanf("%lld", &n);
        v.push_back(n);
    }
    
    sort(v.begin(), v.end());
    
    for (long long i = 0; i < v.size(); i++) {
        printf("%lld \n", v[i]);
    }
}

