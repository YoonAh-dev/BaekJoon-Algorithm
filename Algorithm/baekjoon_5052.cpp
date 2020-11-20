#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int testcase, num = 0;
string telephones[10003];

bool testConsistency() {
    for (int i = 0; i < num; i++)
        cin >> telephones[i];
    
    sort(telephones, telephones+num);
    
    for (int i = 1; i < num; i++) {
        if (telephones[i].find(telephones[i - 1]) == 0) return false;
    }
    
    return true;
}

int main() {
    cin >> testcase;
    
    while(testcase--) {
        cin >> num;
        
        if(testConsistency()) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
