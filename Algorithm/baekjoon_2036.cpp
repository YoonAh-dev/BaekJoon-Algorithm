#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, zero=0, one=0;
    long long ans=0;
    
    cin >> n;
    
    vector<long long> plus, minus;
    
    while(n--){
        long long a;
        cin >> a;
        if(a==0) ++zero;
        else if(a==1) ++one;
        else if(a<0) minus.push_back(a);
        else plus.push_back(a);
    }
    //양수는 큰 것끼리 짝지어 곱해서 더한다.
    sort(plus.begin(),plus.end(),greater<int>());
    for(long long i=0; i<(long long)plus.size()-1; i+=2)
        ans += plus[i]*plus[i+1];
    
    //짝지어지지 못한 양수가 있다면 더한다.
    if(plus.size()&1)
        ans += plus.back();
    
    //1은 무조건 더한다.
    ans += one;
    sort(minus.begin(),minus.end());
    
    //음수는 절댓값이 큰것끼리 곱해서 더한다.
    for(long long i=0; i<(long long)minus.size()-1; i+=2)
        ans += minus[i]*minus[i+1];
    
    //짝지어지지 못한 음수가 있다면, 0이 있으면 곱하고, 없으면 더한다.
    if((minus.size()&1)&&zero==0)
        ans += minus.back();
    
    cout << ans;
}
