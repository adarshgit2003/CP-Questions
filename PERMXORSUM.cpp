#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll t;
	cin>>t;
	while (t--){
	    ll n;
	    cin>>n;
	    if (!(n&1))
	        cout<<n*(n+1)<<endl;
	    else {
	        ll sum=0;
	        for (int bit=0; bit<=32; bit++){
	            if (n&(1<<bit))
	                sum+=pow(2, bit);
	            else 
	                break;
	        }
	        cout<<n*(n+1)-2*sum<<endl;
	    }
	}
	return 0;
}
