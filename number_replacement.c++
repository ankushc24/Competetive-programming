#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        string str;
        cin>>n;
        int *arr=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        cin>>str;
        unordered_map <int,int> hash;
        unordered_map <int,char> hash2;
        char *arr2=new char[n];
        for(int k=0;k<n;k++){
            if(hash[arr[k]]==0){
                hash[arr[k]]++;
                arr2[k]=str[k];
                hash2[arr[k]]=str[k];
            }
            else{
                arr2[k]=hash2[arr[k]];
            }
        }
        string ans;
        for(int m=0;m<n;m++){
            ans+=arr2[m];
        }
        if(ans==str){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}