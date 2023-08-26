#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
    return a.first<b.first;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);

    bool flag=true;
    for(int i=0;i<(n-1);i++){
        if(v[i].second<v[i+1].second){
            continue;
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==false){
        cout<<"Happy Alex";
    }
    else{
        cout<<"Poor Alex";
    }
    return 0;
}