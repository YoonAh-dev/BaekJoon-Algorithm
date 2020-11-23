#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<pair<string, int>> v;

string make_string(int num) {
    string number[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if (num / 10 == 0) {
        return number[num];
    }
    else {
        int first = num / 10;
        int second = num % 10;
        
        return number[first] + " " + number[second];
    }
}

int main() {
    int first, second;
    
    cin >> first >> second;
    
    for (int i = first; i <= second; i++) {
        string word;
        word = make_string(i);
        v.push_back(make_pair(word, i));
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].second << endl;
    }
}
