#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int *arr=new int[n];
        unordered_map <int,int> hash;
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int j=0;j<n;j++){
            hash[arr[j]]++;
        }
        if(hash.size()==1){
            cout<<"NO\n";
        }
        else{
            sort(arr,arr+n,greater<int>());
            int temp=arr[n-1];
            arr[n-1]=arr[1];
            arr[1]=temp;
            cout<<"YES\n";
            for(int k=0;k<n;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}