#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int num, total = 0, sum = 0;
    int numbers[1002] = { 0 };
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        cin >> numbers[i];
    }
    
    sort(numbers, numbers+num);
    
    for (int i = 0; i < num; i++) {
        total += numbers[i];
        sum += total;
    }
    
    cout << sum << endl;
}
