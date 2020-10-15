#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool parenCheck(string parenthesis){
    stack<char> parenStack;
    
    for(int i = 0; i < parenthesis.length(); i++){
        char c =  parenthesis[i];
        
        if(c == '(')
            parenStack.push(parenthesis[i]);
        else if(c == ')' && !parenStack.empty())
            parenStack.pop();
        else if(c == ')' && parenStack.empty())
            return false;
    }
    
    if(parenStack.empty()) return true;
    else return false;
}

int main() {
    int caseNumber = 0, caseCount = 0;
    
    cin >> caseNumber;
    
    while(1) {
        if(caseCount == caseNumber) break;
        else caseCount++;
        
        string parenthesis;
        
        cin >> parenthesis;
        
        if(parenCheck(parenthesis)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
