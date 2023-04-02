#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,a,b;
        cin>>n>>a>>b;
        float x=float(n);
        int ans=ceil(x/a);
        if(b<a){
            cout<<1<<endl;
        }
        else if(a==b){
            cout<<ans<<endl;
        }
        else if(b>a){
            cout<<ans<<endl;
        }
    }
    return 0;
}