#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll l,r;
        cin>>l>>r;
        ll temp;
        ll lucky=INT_MIN;
        ll k;
        ll index;
        for(ll j=l;j<=r;j++){
            ll mi=INT_MAX;
            ll ma=INT_MIN;        
            temp=j;
            while(temp>0){
                k=temp%10;
                temp=temp/10;
                mi=min(mi,k);
                ma=max(ma,k);
            }
            if(ma-mi>lucky){
                index=j;
            }
            lucky=max(lucky,ma-mi);
            if(lucky==9){
                break;
            }

        }
        cout<<index<<endl;
    }
    return 0;
}