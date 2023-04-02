#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    for(ll i=0;i<test;i++){
        string str;
        cin>>str;
        ll l=str.length();
        if(l<3){
            cout<<": ("<<endl;
        }
        else if(str[1]=='a'){
            cout<<str[0]<<" "<<str[1]<<" ";
            for(ll j=2;j<l;j++){
                cout<<str[j];
            }
            cout<<endl;

        }
        else if(str[1]=='b'){
            cout<<str[0]<<" ";
            for(ll j=1;j<l-1;j++){
                cout<<str[j];
            }
            cout<<" ";
            cout<<str[l-1]<<endl;
        }
    }
    return 0;
}