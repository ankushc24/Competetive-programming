#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll h=0;h<t;h++){
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll j=0;j<n;j++){
        if(arr[j-1]==1){
            arr[j-1]+=1;
        }
    }
    for(ll j=1;j<n;j++){
        if(arr[j-1]>arr[j]){
            continue;
        }
        if((arr[j]%arr[j-1])==0){
            arr[j]+=1;
        }
    }
    for(ll j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}