#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll *arr=new ll[n];
    unordered_map <ll,ll> hash;
    for(ll i=0;i<n;i++){
        cin>>arr[i];
        hash[arr[i]]++;
    }
    ll taxi=0;
    taxi+=hash[4];
    hash[4]=0;
    taxi+=hash[3];
    
    if(hash[3]>=hash[1]){
        hash[1]=0;
    }
    else{
        hash[1]-=hash[3];
    }
    hash[3]=0;
    if(hash[2]%2==0){
        taxi+=hash[2]/2;
        hash[2]=0;

    }
    else{
        taxi+=(hash[2]/2)+1;
        hash[2]=0;
        if(hash[1]==1){
            hash[1]=0;
        }
        else if(hash[1]>=2){
            hash[1]-=2;
        }
    }
    if(hash[1]%4==0){
        taxi+=hash[1]/4;
        hash[1]=0;
    }
    else{
        taxi+=(hash[1]/4)+1;
        hash[1]=0;
    }
    cout<<taxi<<endl;
    return 0;
}