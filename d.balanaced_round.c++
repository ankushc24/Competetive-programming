#include <bits/stdc++.h>
using namespace std; 
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int ans=1;
        int count=1;
        sort(arr.begin(),arr.end());
        for(int j=1;j<n;j++){
            if((arr[j]-arr[j-1])<=k){
                count++;
                ans=max(ans,count);
            }
            else{
                count=1;
            }

        }
        cout<<n-ans<<endl;
    }
    return 0;
}