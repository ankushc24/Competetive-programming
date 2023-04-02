#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
    return a.first>b.first;
}
int main(){
    int n;
    cin>>n;
    int *a=new int[n];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        v.push_back({a[i],i+1});
    }
    sort(v.begin(),v.end(),cmp);
    int count=0;
    for(int i=0;i<n;i++){
        count+=(v[i].first*(i)+1);
    }
    cout<<count<<endl;
    for(int j=0;j<n;j++){
        cout<<v[j].second<<" ";
    }
    cout<<endl;
    return 0;
}
