#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n,q;
		cin>>n>>q;
		vector<int> d(q);

		for(int j=0;j<q;j++){
			cin>>d[j];
		}

		 for(int j=1;j<n;j++){
		 	cout<<j<<" "<<j+1<<endl;
		 }
		 int curr=n-1;
		 int u=n-1;
		 //int v=;
		 for(int j=0;j<q;j++){
		 	if(d[j]==curr){
		 		cout<<-1<<" "<<-1<<" "<<-1<<endl;
		 	}
		 	else{
		 		int new1=d[j];
		 		cout<<n<<" "<<u<<" "<<d[j];
		 		u=d[j];
		 		curr=d[j];
		 		cout<<endl;
		 	}
		 }

	}
	return 0;
}