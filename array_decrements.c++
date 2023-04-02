#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        unordered_map<int,int> hash;
        int n;
        cin>>n;
        int *a=new int[n];
        int *b=new int[n];
        int max1=INT_MIN;
        int max2=INT_MIN;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            cin>>b[j];
        }   
        bool ans=true;
        for(int j=0;j<n;j++){
            if((a[j]-b[j])<0){
                cout<<"NO\n";
                ans=false;
                break;
            }
            else if(b[j]==0){
                max1=max(max1,a[j]-b[j]);
            }
            else if(b[j]!=0){
                hash[a[j]-b[j]]++;
                max2=max(max2,a[j]-b[j]);
            } 

        }
        if(ans==true){
            if(n==1 || hash.size()==0){
                cout<<"YES\n";
            }
            else if(max1>max2){
                cout<<"NO\n";
            }
            else if(hash.size()<=1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }

        }
    
    return 0;
    }
    
