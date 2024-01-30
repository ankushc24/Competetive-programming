#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int> a(n);
		for(int j=0;j<n;j++){
			cin>>a[j];
		}
		sort(a.begin(),a.end(),greater<int>());

		int a1=0,b=0;

		for(int j=0;j<n;j++){
			if(a1<=b){
				a1+=a[j];
			}
			else{
				b+=a[j];
			}
		}

		if(a1==b){
			cout<<"YES\n";
		}
		else{
			cout<<"NO\n";
		}
	}
	return 0;
}