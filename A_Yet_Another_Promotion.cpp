#include <bits/stdc++.h>
using namespace  std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll a,b;
        cin>>a>>b;
        ll n,m;
        cin>>n>>m;
        ll g=(n/(m+1));
        ll x=(a*g*m)+(n-g*(m+1))*a;
        ll y=(a*g*m)+(n-g*(m+1))*b;
        ll z=n*b;
        ll s=x;
        if(y<s){
            s=y;
        }
        if(z<s){
            s=z;
        }
        cout<<s<<endl;

    }
    return 0;
}
