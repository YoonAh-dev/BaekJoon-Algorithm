#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int caseNumber = 0, studentNumber = 0, caseCount = 0;
    
    cin >> caseNumber;
    
    while(1) {
        if(caseCount == caseNumber) break;
        else caseCount++;
        
        cin >> studentNumber;
        
        int scoreArr[studentNumber];
        int sum = 0, higherStudent = 0;
        double scoreAverage = 0.0, resultAverage;
        
        for(int i = 0; i < studentNumber; i++){
            cin >> scoreArr[i];
            sum += scoreArr[i];
        }
        
        scoreAverage = (double)sum / studentNumber;
        
        for(int i = 0; i < studentNumber; i++) {
            if(scoreArr[i] > scoreAverage)
                higherStudent++;
        }
        
        resultAverage = (double)higherStudent / studentNumber;
        
        cout << fixed << setprecision(3) << resultAverage * 100 << "%" << endl;
    }
}
