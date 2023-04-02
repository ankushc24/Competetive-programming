#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int k=0;k<test;k++){
        string str;
        int n;
        cin>>n;
        cin>>str;
        bool ans=false;
        int num=0;
        for(int i=0;i<n;i++){
            if(str[i]=='R'){
                ans=true;
            }
            if(str[i]=='L' && ans==true){
                cout<<0<<endl;
                num=1;
                break;
            }
        }
        if(num==0){
        for(int i=0;i<n-1;i++){
            if(str[i]=='L' && str[i+1]=='R'){
                cout<<i+1<<endl;
                num=1;
                break;
            }
        }
        }
        if(num==0){
        cout<<-1<<endl;
        }
    }
    return 0;
}