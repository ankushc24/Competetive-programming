#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<1<<" "<<n/2<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}