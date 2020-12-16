#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

int main() {
    int diceArray[6];
    ll num;
    ll sum = 0;
    ll firstMinNum = 0, secondMinNum = 0, thirdMinNum = 0;
    
    cin >> num;
    
    for (int i = 0; i < 6; i++) {
        cin >> diceArray[i];
    }
    
    if (num == 1) {
        sort(diceArray, diceArray+6);
        for (int i = 0; i < 5; i++) {
            sum += diceArray[i];
        }
    }
    else {
        diceArray[0] = diceArray[0] > diceArray[5]? diceArray[5]: diceArray[0];
        diceArray[1] = diceArray[1] > diceArray[4]? diceArray[4]: diceArray[1];
        diceArray[2] = diceArray[2] > diceArray[3]? diceArray[3]: diceArray[2];
        
        sort(diceArray, diceArray+3);
        firstMinNum = diceArray[0] + diceArray[1] + diceArray[2];
        secondMinNum = diceArray[0] + diceArray[1];
        thirdMinNum = diceArray[0];
        
        ll n1 = (num - 1) * (num - 2) * 4 + (num - 2) * (num - 2);
        ll n2 = (num - 1) * 4 + (num - 2) * 4;
        
        sum = n1 * thirdMinNum + n2 * secondMinNum + 4 * firstMinNum;
    }
    
    cout << sum << endl;
}
