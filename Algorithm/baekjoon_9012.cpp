#include <iostream>
#include <string>

using namespace std;

int main() {
    int caseNumber = 0, caseCount = 0;
    
    cin >> caseNumber;
    
    while(1) {
        if(caseCount == caseNumber) break;
        else caseCount++;
        
        int stackCount = 0;
        bool isVaild = true;
        char stack[50];
        string parenthesis;
        
        cin >> parenthesis;
        
        for(int i = 0; i < parenthesis.length(); i++){
            if(parenthesis[i] == '('){
                stack[stackCount++] = parenthesis[i];
            }
            else if(parenthesis[i] == ')' && stackCount != 0)
                stack[stackCount--] = '\0';
            else if(parenthesis[i] == ')' && stackCount == 0) {
                isVaild = false;
                break;
            }
        }
        
        if(stackCount != 0) isVaild = false;
        
        if(isVaild) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
