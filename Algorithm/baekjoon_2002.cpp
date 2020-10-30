#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    int cars[1001];
    int num, pass = 0;
    unordered_map<string, int> m;
    string s;
    
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> s;
        m[s] = i;
    }
    
    for (int i = 0; i < num; i++) {
        cin >> s;
        int n = m[s];
        cars[i] = n;
    }
    
    for (int  i = 0; i < num - 1; i++) {
        for (int j = i + 1; j < num; j++) {
            if(cars[i] > cars[j]) {
                pass++;
                break;
            }
        }
    }
    
    cout << pass << endl;
}
