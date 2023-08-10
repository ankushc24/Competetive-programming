#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    int ans=0;
    int count=0;
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++){
        if(v[j]>=ans){
            count++;
            ans+=v[j];
        }
        else{
            continue;
        }
    }
    cout<<count<<endl;

    return 0;
}