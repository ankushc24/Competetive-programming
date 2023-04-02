#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        string s;
        cin>>n;
        cin>>s;
        int a=n-1;
        int count=0;
        for(int j=0;j<n-2;j++){
            if(s[j]==s[j+2]){
                count++;
            }
        }
        cout<<a-count<<endl;
    }
    return 0;
}