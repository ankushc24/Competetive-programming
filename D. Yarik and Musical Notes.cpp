#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	for(ll i=0;i<t;i++){
		ll n;
		cin>>n;
		vector<ll> a(n);
		map<ll,ll> freq;

		for(ll j=0;j<n;j++){
			cin>>a[j];
			freq[a[j]]++;
		}
		ll count=0;
		for(auto val: freq){
			count+=(val.second*(val.second-1)/2);
		}
		if(freq.find(1)!=freq.end() && freq.find(2)!=freq.end()){
			count+=(freq[1]*freq[2]);
		}

		cout<<count<<endl;


	}
	return 0;
}