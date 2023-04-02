#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        string str;
        cin>>str;
        ll count=n;
        ll l=0;
        ll h=n-1;
        bool ans=true;
        while(l<h){
            if((str[l]=='0' && str[h]=='1') || (str[l]=='1' && str[h]=='0')){
                count=count-2;
                l++;
                h--;
            }
            else{
                ans=false;
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}