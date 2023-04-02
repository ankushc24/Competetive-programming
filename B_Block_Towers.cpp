#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<int,int> v1, pair<int,int> v2){
    return v1.first<v2.first;
}


int main(){
    ll t;
    cin>>t;


    for(ll i=0;i<t;i++){
        ll b;
        vector<pair<int,int>> v;
        ll p;
        ll n;
        cin>>n;
        //ll *arr=new ll[n];
        cin>>b;
        ll s=b;
        ll g;
        v.push_back({b,0});
        for(ll j=1;j<n;j++){
            cin>>b;
            v.push_back({b,j});

        }
        sort(v.begin(),v.end(),cmp);
        for(ll k=0;k<n;k++){
            if(v[k].second==0){
                p=k;
                break;
                
            }
        }
        for(ll k=p+1;k<n;k++){
            if(v[p].first<v[k].first){
                if((v[k].first-v[p].first)%2==0){
                    g=(v[k].first-v[p].first)/2;
                }
                else{
                    g=((v[k].first-v[p].first)/2)+1;
                }
                
                v[p].first+=(g);
            }

        }
        cout<<v[p].first<<endl;

    }
    return 0;
}