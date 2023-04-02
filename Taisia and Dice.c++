#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,s,r;
        cin>>n>>s>>r;
        int k=s-r;
        int a=r/(n-1);
        int b=r%(n-1);
        cout<<k<<" ";
        for(int j=0;j<n-1;j++){
            if(b>0){
                cout<<a+1<<" ";
                b--;
            }
            else{
                cout<<a<<" ";
            }
        }
        cout<<endl;
        
    }
    return 0;
}