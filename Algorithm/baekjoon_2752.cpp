#include <iostream>

using namespace std;

void print(int n1, int n2, int n3) {
    cout << n1 << " " << n2 << " " << n3 << endl;
}

int main() {
    int a, b, c, t;
    
    cin >> a >> b >> c;
    
    if (a > b) {
        t = a; a = b; b = t;
    }
    if (b > c) {
        t = b; b = c; c = t;
    }
    if (a > b) {
        t = a; a = b; b = t;
    }
    
    print(a, b, c);
}
