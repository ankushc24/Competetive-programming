#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll *arr=new ll[n];
        ll prod=1;
        for(ll j=0;j<n;j++){
            cin>>arr[j];
            prod*=arr[j];
        }
        int flag=0;
        ll p=1;
        ll a=prod;
        for(ll k=0;k<n-1;k++){
            p*=arr[k];
            a/=arr[k];
            if(a==p){
                cout<<k+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<-1<<endl;
        }
    }
    return 0;
}