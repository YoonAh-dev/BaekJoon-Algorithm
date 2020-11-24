// 내 풀이
//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//int main() {
//    vector<pair<string, string>> v;
//    int num;
//
//    while(1) {
//        cin >> num;
//        if (num == 0) break;
//
//        for (int i = 0; i < num; i++) {
//            string str, tmp;
//            cin >> str;
//            tmp = str;
//            for (int j = 0; j < str.size(); j++) {
//                str[j] = tolower(str[j]);
//            }
//            v.push_back(make_pair(str, tmp));
//        }
//
//        sort(v.begin(), v.end());
//
//        cout << v.front().second << endl;
//    }
//}

#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
 
using namespace std;
 
int map[600];
 
int compStr(string str, string tmp)
{
    int len;
    
    if (str.size() > tmp.size())
        len = tmp.size();
    else
        len = str.size();
    
    bool chk = true;
    int ret = 0; // 1이면 str이 사전상 앞, 2면 tmp가 사전상 앞, 3이면 둘다 같다.
 
    for (int i = 0; i < len; i++)
    {
        int s = map[str[i]];
        int t = map[tmp[i]];
        
        if (s == t)
            continue;
        else
        {
            if (s < t)
                ret = 1;
            else
                ret = 2;
 
            chk = false;
            break;
        }
    }
 
    // 위의 방식에서 끝을 못봤다면
    // 즉, 둘다 계속 같은 문자였다면 길이가 결국 긴 단어가 사전상 뒤
    if (chk)
    {
        if (str.size() > tmp.size())
            ret = 2;
        else if (str.size() == tmp.size())
            ret = 3;
        else
            ret = 1;
    }
 
    return ret;
}
 
int main()
{
    for (int i = 'a', val = 2; i <= 'z'; i++, val += 2)
        map[i] = val;
 
    while (1)
    {
        int n;
        scanf("%d", &n);
 
        if (!n)
            break;
 
        string str;
        cin >> str;
        
        for (int i = 1; i < n; i++)
        {
            // t에 str을 넣어두고 str을 소문자로 초기화
            string t = str;
            str.clear();
            for (int i = 0; i < t.size(); i++)
                str += tolower(t[i]);
 
            string tmp;
            cin >> tmp;
 
            // tt에 tmp를 넣어두고 tmp를 소문자로 초기화
            string tt = tmp;
            tmp.clear();
            for (int i = 0; i < tt.size(); i++)
                tmp += tolower(tt[i]);
 
            // 소문자로 다 변한 str과 tmp 비교
            int get = compStr(str, tmp);
 
            if (get == 2)
                str = tt;
            else
                str = t;
        }
 
        cout << str << endl;
    }
    return 0;
}
