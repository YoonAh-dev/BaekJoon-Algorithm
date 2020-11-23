#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string number;
    
    cin >> number;
    
    sort(number.begin(), number.end());
    reverse(number.begin(), number.end());
    
    cout << number << endl;
}
