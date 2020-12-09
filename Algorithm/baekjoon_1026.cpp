#include <iostream>
#include <algorithm>
using namespace std;

int aArray[51];
int bArray[51];

int main() {
    int num, total = 0;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> aArray[i];
    }
    
    for (int i = 0; i < num; i++) {
        cin >> bArray[i];
    }
    
    sort(aArray, aArray+num);
    sort(bArray, bArray+num);
    reverse(bArray, bArray+num);
    
    for (int i = 0; i < num; i++) {
        total += aArray[i] * bArray[i];
    }
    
    cout << total << endl;
}
