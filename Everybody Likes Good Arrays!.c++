#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
        ll count=0;
        if(n==1){
            cout<<0<<endl;
        }
        else{
            for(ll q=0;q<n-1;q++){
                if((a[q]%2)==(a[q+1]%2)){
                    count++;
                }
            }
            cout<<count<<endl;
        }
        
    }
    return 0;
}