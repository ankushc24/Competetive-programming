#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string s,t;
        cin>>s>>t;
        int j=0,k=0;
        int a=s.length();
        int b=t.length();
        while(j<a && k<b){
            if(s[j]==t[k]){
                j++;
                k++;
            }
            else{
                j++;
            }
        }
        if(k==b){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        
    }
    return 0;
}