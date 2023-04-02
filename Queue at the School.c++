#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string str;
    cin>>str;
    for(int i=1;i<=t;i++){
        for(int j=0;j<n;j=j+1){
            if(str[j]=='B' && str[j+1]=='G'){
                char temp=str[j];
                str[j]=str[j+1];
                str[j+1]=temp;
                j++;
            }
        }
    }
    cout<<str<<endl;
}