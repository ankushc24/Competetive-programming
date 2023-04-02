#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(){
    
        int n,k;
        int arr[100];
        int count=0;
        cin>>n>>k;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        //sort(arr,arr+n);
        int save=arr[k-1];
        for(int a=0;a<n;a++){
            if(arr[a]>=save && arr[a]>0){
                count++;
            }
        }
        cout<<count;
    
}