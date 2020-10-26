#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int notsee = 0, nothear = 0;
    int count = 0;
    vector<string> seeVector;
    vector<string> result;
    
    cin >> nothear >> notsee;
    
    for (int i = 0; i < nothear; i++) {
        string s;
        cin >> s;
        seeVector.push_back(s);
    }
    
    sort(seeVector.begin(), seeVector.end());
    
    for (int i = 0; i < notsee; i++) {
        string s;
        cin >> s;
        if(binary_search(seeVector.begin(), seeVector.end(), s)) {
            result.push_back(s);
            count++;
        }
    }
    
    cout << count << endl;
    sort(result.begin(), result.end());
    
    for (string s : result)
        cout << s << endl;
    
    return 0;
}
