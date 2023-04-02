#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll neg=0;
        ll zero=0;
        ll *a=new ll[n];
        for(ll j=0;j<n;j++){
            cin>>a[j];
            if(a[j]<0){
                neg++;
            }
            else if(a[j]==0){
                zero++;
            }
        }
        if(neg%2==0){
            ll sum=0;
            for(ll j=0;j<n;j++){
                sum+=abs(a[j]);
            }
            cout<<sum<<endl;
        }
        else{
            ll sum=0;
            if(zero>0){
            for(ll j=0;j<n;j++){
                sum+=abs(a[j]);
            }
            cout<<sum<<endl;
            }
            else{
                ll sum=0;
                ll m=abs(a[0]);
                for(ll k=0;k<n;k++){
                    if(abs(a[k])<m){
                        m=abs(a[k]);
                    }
                }
                
                for(ll j=0;j<n;j++){
                sum+=abs(a[j]);
                }
                ll o=sum-2*m;
                cout<<o<<endl;

            }
        }
    }
        
    return 0;
}