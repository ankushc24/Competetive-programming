#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        int *a=new int[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int num=1;
        int count=0;
        for(int j=0;j<n;j++){
            if(a[j]==num){
                num++;
            }
            else{
                count++;
            }
        }
        float x=float(count);
        float y=float(k);
        float t=x/y;
        int ans=ceil(t);
        cout<<ans<<endl;
    }
    return 0;
}