#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int *h=new int[n];
        for(int j=0;j<n;j++){
            cin>>h[j];
        }
        int s=0;
        for(int k=0;k<n;k++){
            if(h[k]==1){
                s++;
            }
        }
        int q=s/2;
        if((s%2)==0){
            cout<<n-s+q<<endl;
        }
        else{
            cout<<n-q<<endl;
        }



    }
    return 0;
}