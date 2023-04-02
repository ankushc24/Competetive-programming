#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int odd[1000];
        int even[1000];
        int x=0;
        int y=0;
        for(int k=0;k<n;k++){
            if(arr[k]%2!=0){
                odd[x]=k+1;
                x++;
            }
            else{
                even[y]=k+1;
                y++;
            }
        }
        if(y>=2 && x>=1){
            cout<<"YES\n";
            cout<<even[0]<<" "<<even[1]<<" "<<odd[0]<<"\n";
        }
        else if(x>=3){
            cout<<"YES\n";
            cout<<odd[0]<<" "<<odd[1]<<" "<<odd[2]<<"\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}