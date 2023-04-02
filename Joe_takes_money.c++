#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
         ll n;
         cin>>n;
         ll *arr=new ll[n];
         for(ll j=0;j<n;j++){
            cin>>arr[j];
         }
        ll prod=1;
        for(ll j=0;j<n;j++){
            prod=prod*arr[j];
        }
        cout<<(prod+n-1)*2022<<endl;
    }
    return 0;
}