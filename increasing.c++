#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int *a=new int[n];
        bool ans=true;
        cin>>a[0];
        for(int j=1;j<n;j++){
            cin>>a[j];
        }
        sort(a,a+n);
        for(int j=1;j<n;j++){
            if(a[j]>a[j-1]){
                continue;
            }
            else{
                ans=false;
                break;            }
        }
        if(ans==false){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

    }
}