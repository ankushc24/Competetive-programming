#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        ll mod=pow(10,9)+7;
        cin>>n;
        ll sum=0;
        sum+=(((((n*(n+1))%mod)*(2*n+1))%mod)%mod);

        sum+=((((3*n*(n-1))%mod))+((((n*(n-1))%mod)*((2*n)-1)%mod)))%mod;
        cout<<(337*(sum%mod))%mod<<endl;
    }
    return 0;
}

//Siuu