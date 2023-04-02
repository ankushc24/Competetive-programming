#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll j=0;j<t;j++){
        ll x,y;
        cin>>x>>y;
        //ll arr[100000];
        //ll n=0;
        vector<ll> ans;
        ll i=0;
        ll temp=x-1;
        ans.push_back(x);
        i++;
        while(temp>y){
            ans.push_back(temp);
            temp--;
            i++;
        }
        ans.push_back(y);
        i++;
        temp=y+1;
        while(temp<x){
            ans.push_back(temp);
            temp++;
            i++;
        }
        ll n=i;
        cout<<n<<endl;
        for(ll e=0;e<n;e++){
            cout<<ans[e]<<" ";
        }
        cout<<endl;

    }
    return 0;
}