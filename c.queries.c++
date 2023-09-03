#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;
        int n=s.length();
        int count=0;
        bool b=true;
        int prev;
        int prev_count=count;
        for(int j=0;j<n;j++){
            if( (s[j]=='+' ) ){
                count++;
                prev_count=count;
            }
            else if(s[j]=='-'){
                count--;

            }
            else if((s[j]=='0' || s[j]=='1') && count<2){
                b=false;
                break;
            }
            else if( i<(n-1) && ( (s[j]=='0' && s[j+1]=='1') || (s[j]=='1' && s[j+1]=='0') ) ){
                b=false;
                break;
            }
            else if(j>=3 && s[j-3]=='0' && s[j-2]=='+' && s[j-1]=='-' && s[j]=='1'){
                b=false;
                break;
            }
            else if(j>=3 && s[j-3]=='1' && s[j-2]=='+' && s[j-1]=='-' && s[j]=='0'){
                b=false;
                break;
            }            
        }
        if(b==false){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}