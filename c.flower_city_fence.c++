#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        vector<int> a(n);
        bool same=true;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i>0 && a[i]!=a[i-1]){
                same=false;
            }
        }

        if(n==1 && a[0]==1){
            cout<<"Yes\n";
        }        
        else if(a[0]!=n){
            cout<<"NO\n";
        }

        else if(same==true && a[n-1]==n){
            cout<<"YES\n";
        }

        else{
            vector<int> dum(n+1,0);

            for(int i=0;i<n;i++){
                dum[a[i]]++;
            }
            for(int i=n-1;i>=0;i--){
                dum[i]+=dum[i+1];
            }
            bool flag=true;
            for(int i=0;i<n;i++){
                if(a[i]!=dum[i+1]){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                cout<<"Yes\n";
            }
            if(flag==false){
                cout<<"No\n";
            }

            
        }

    }
    return 0;
}