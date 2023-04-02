#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(int i=0;i<t;i++){
    ll n; 
    cin>>n;
    ll *a=new ll[n];
    ll mi=0;
    ll ma=0;
    for(ll j=0;j<n;j++){
        cin>>a[j];
        if(a[j]>a[ma]){
            ma=j;
        }
        if(a[j]<a[mi]){
            mi=j;
        }
    }
    cout<<mi+1<<" "<<ma+1<<endl;

    }

    return 0;
}