#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll count=0;
    for (ll i=0; i<n; i++){
        int digit = s[i]-'0';
        if (digit==0){
            count++;
            k=k/10*10;
            continue;
        }
        digit = 10-digit;
        if (k < digit)
            break;
        else {
            ll num;
            if (k%10 < digit)
                num = (k/10-1)*10+digit;
            else 
                num = k/10*10+digit;
            k = num;
            count++;
        }
    }
    cout<<count<<endl;
}
int main(){
    ll t;
    cin>>t;
    while (t--){
        solve();
    }
    return 0;
}