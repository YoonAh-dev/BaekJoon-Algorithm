#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<pair<int, pair<int, int>>> v;

void findWinner() {
    int cnt_winner[100] = { 0 };
    sort(v.rbegin(), v.rend());
    
    for (int i = 0, cnt = 0; cnt < 3; i++) {
        int rank = v[i].second.first;
        int stud_id = v[i].second.second;
        
        if (cnt_winner[rank] == 2) continue;
        else {
            cnt_winner[rank]++;
            cout << rank << " " << stud_id << endl;
            cnt++;
        }
    }
}

int main() {
    int num;
    cin >> num;
    
    for (int i = 0; i < num; i++) {
        int coun_id, stud_id, score;
        cin >> coun_id >> stud_id >> score;
        v.push_back(make_pair(score, make_pair(coun_id, stud_id)));
    }
    findWinner();
}
