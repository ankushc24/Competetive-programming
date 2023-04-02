#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        int n;
        cin>>n;
        int *a=new int[n];
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }
        bool f1=false;
        bool f2=false;
        for(int i=0;i<n-1;i++){
            if(a[i]==-1 && a[i+1]==-1){
                f1=true;
                sum+=4;
                break;
            }
        }
        if(f1==false){
            for(int j=0;j<n-1;j++){
                if(a[j+1]==(-1)*a[j]){
                    f2=true;
                    break;
                }
            }
        }
        if(f1==false && f2==false){
            sum-=4;
        }
        cout<<sum<<endl;

    }
    return 0;
}