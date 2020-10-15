#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int stickNumber = 0, countStick = 1;
    
    cin >> stickNumber;
    
    int sticks[stickNumber];
    
    for (int i = 0; i < stickNumber; i++)
        cin >> sticks[i];
    
    int top = sticks[stickNumber-1];
    
    for (int i = stickNumber-2; i >= 0; i--) {
        if(sticks[i] > top){
            countStick++;
            top = sticks[i];
        }
    }
    
    cout << countStick << endl;
}
