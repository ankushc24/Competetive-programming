#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        int s=0;
        cin>>n;
        int *a=new int[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        int *b=new int[n];
        for(int j=0;j<n;j++){
            cin>>b[j];
        }
        bool ans=true;
        for(int k=0;k<n;k++){
            if(a[k]!=b[k]){
                ans=false;
                s++;
            }
        }
        if(ans==true){
            cout<<0<<endl;
        }
        else{
            int o1=0;
            int z1=0;
            int o2=0;
            int z2=0;
            for(int k=0;k<n;k++){
                if(a[k]==0){
                    o1++;
                }
                if(a[k]==1){
                    z1++;
                }
            }

        
        for(int k=0;k<n;k++){
            if(b[k]==0){
                o2++;
            }
            if(b[k]==1){
                z2++;
            }
        }
        int x=abs(z1-z2);
        
        if(s>x){
            cout<<x+1<<endl;
        }
        else{
            cout<<x<<endl;
        }
        }


    }
    return 0;
}