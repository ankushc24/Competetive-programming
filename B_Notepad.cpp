#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        unordered_map<string,int> hash;
        string str;
        bool ans=false;
        for(ll j=0;j<n-1;j++){

            str=s[j];
            str+=s[j+1];
            if(hash.find(str)!=hash.end()){
                if((hash[str]+1)==j){
                    continue;
                }
                else{
                ans=true;
                cout<<"YES"<<endl;
                break;
                }
            }
            else{
            hash[str]=j;
            }
        }
        if(ans==false){
            cout<<"NO"<<endl;
        }

    }
    return 0;
}