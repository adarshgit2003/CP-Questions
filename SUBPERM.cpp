#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve(){
    ll n, k;
    cin>>n>>k;
    if (n==1 && k==1){
        cout<<1<<endl;
        return;
    }
    if (k==1){
        cout<<"-1"<<endl;
        return;
    }
    cout<<1<<" ";
    ll i;
    for (i=2; i<k; i++)
        cout<<i<<" ";
    for (ll j=k+1; j<=n; j++)
        cout<<j<<" ";
    cout<<i<<endl;
}
int main() {
    ll t;
	cin>>t;
    while (t--)
        solve();
	return 0;
}