#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll num){
    ll y=pow(10,9)+7;
    ll x=1;
    for(ll i=2;i<=num;i++){
        x=(x*i)%y;
    }
    return x%y;
}
int main(){
    ll t;
    cin>>t;
    ll y=pow(10,9)+7;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll x=(((n*(n-1))%y)*fact(n))%y;
        cout<<x<<endl;
    }
    return 0;
}