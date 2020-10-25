#include <cstdio>
#include <algorithm>

using namespace std;

int firstArr[100001];
int secondArr[100001];

int binarySearch(int num, int key) {
    int low = 0, high = num - 1, mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if (firstArr[mid] == key)
            return 1;
        else if (firstArr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return 0;
}

int main() {
    int fnum = 0, snum = 0;
    
    scanf("%d", &fnum);
    for (int i = 0; i < fnum; i++)
        scanf("%d", &firstArr[i]);
    
    scanf("%d", &snum);
    for (int i = 0; i < snum; i++)
        scanf("%d", &secondArr[i]);
    
    sort(firstArr, firstArr+fnum);
    
    for (int i = 0; i < snum; i++) {
        if (binarySearch(fnum, secondArr[i]))
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
