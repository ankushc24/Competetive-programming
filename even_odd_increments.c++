#include <bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(long long i=0;i<test;i++){
        long long n,q;
        cin>>n>>q;
        // long long *arr=new long long[n];
        long long arr[100000];
        for(long long j=0;j<n;j++){
            cin>>arr[j];
        }
        for(int k=0;k<q;k++){
            long long a;
            long long b;
            cin>>a>>b;
            if(a==0){
                for(long long p=0;p<n;p++){
                   if(arr[p]%2==0){
                        arr[p]+=b;
                   }
                }
            }
            else if(a==1){
                for(long long u=0;u<n;u++){
                   if(arr[u]%2!=0){
                        arr[u]+=b;
                   }
                }                
            }
        long long sum=0;
        for(long long r=0;r<n;r++){
            sum+=arr[r];
        }
        cout<<sum<<endl;
        }
        

    }
    return 0;
}