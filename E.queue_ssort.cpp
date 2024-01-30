#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector<int> a(n);

		int mi=INT_MAX;
		int ind=-1;
		for(int j=0;j<n;j++){
			cin>>a[j];

			if(a[j]<mi){
				mi=a[j];
				ind=j;
			}
		}

		bool check=is_sorted(a.begin()+ind,a.end());

		if(check==true){
			cout<<ind<<endl;
		}
		else{
			cout<<-1<<endl;
		}
	}
	return 0;
}