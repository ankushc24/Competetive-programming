#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll lcm(ll x,ll y){
    ll t=max(x,y);
    ll lcm=max(x,y);
    while(true){
    if(lcm%x==0 && lcm%y==0){
        return lcm;
    }
    else{
        lcm+=t;
    }
    }
}
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll *a=new ll[n];
        for(ll j=0;j<n;j++){
            cin>>a[j];
        }
        ll *b=new ll[n+1];
        b[0]=a[0];
        b[n]=a[n-1];
        for(ll j=1;j<n;j++){
            b[j]=lcm(a[j-1],a[j]);
        }
        bool flag=1;
        for(ll j=0;j<n;j++){
            if(a[j]==__gcd(b[j],b[j+1])){
                continue;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
    return 0;
}