#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            count++;
        }
    }
    int sum=0;
    if(count==0){
        cout<<0<<endl;
    }
    
    else{
        if(count>=m){
            for(int i=0;i<m;i++){
                sum+=arr[i];
            }
        }
        else{
            for (int i = 0; i < count; i++)
            {
                sum+=arr[i];
            }
            
        }

        cout<<abs(sum)<<endl;
    }
    
    return 0;
}