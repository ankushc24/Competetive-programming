#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	// your code goes here
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
	    ll n;
	    cin>>n;
        ll mod=pow(10,9)+7;
	    ll *arr=new ll[n];
	    for(ll j=0;j<n;j++){
	        cin>>arr[j];
	    }
	    ll *hash=new ll[n];
	    for(ll j=0;j<=n;j++){
	        hash[j]=0;
	    }
	    for(ll j=0;j<=n;j++){
	        hash[arr[j]]++;
	    }
	    ll c=1;
	    ll tot=0;
	    for(ll j=1;j<=n;j++){
	        if(hash[j]==0){
	            break;
	        }
	        c*=hash[j];
	        tot+=c;
	    }
	    if(hash[1]==0){
	        cout<<0<<endl;
	    }
	    
	    else{
	        cout<<tot%mod<<endl;
	    }
	    
	}
	return 0;
}
