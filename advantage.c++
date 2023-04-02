
#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int arr[n];
        
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int max=arr[0];
        for(int k=0;k<n;k++){
            if(arr[k]>max){
                max=arr[k];
            }
        }
        int arr2[n];
        for(int c=0;c<n;c++){
            arr2[c]=arr[c];
        }
        sort(arr,arr+n);
        for(int d=0;d<n;d++){
            if(arr2[d]==max){
                cout<<arr2[d]-arr[n-2]<<" ";
            }
            else{
            cout<<arr2[d]-max<<" ";
            }
        }
    }
    return 0;
}