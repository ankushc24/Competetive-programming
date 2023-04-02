#include <bits/stdc++.h>
using namespace std;
#define ll long long
int  main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll *a=new ll[n];
        ll *b=new ll[n];
        ll ans=0;
        for(ll j=0;j<n;j++){
            cin>>a[j];
            ans+=a[j];
        }
        ll m=0;
        for(ll j=0;j<n;j++){
            cin>>b[j];
            if(b[j]>b[m]){
                m=j;
            }
        }
        for(ll x=0;x<m;x++){
            ans+=b[x];
        }  
        for(ll k=m+1;k<n;k++){
            ans+=b[k];
        }
        cout<<ans<<endl;

    }
    return 0;
}