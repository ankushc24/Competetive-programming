#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string s;
        string x;
        string y;
        bool ans=false;
        cin>>s;
        x=s;
        y=s;
        for(int j=0;j<n/2;j++){
            x[j]=s[n-j-1];  //p1
        }
        for(int j=0;j<n/2;j++){
            y[n-j-1]=s[j];  //p2
        }
        int count=0;
        int c=0;
        for(int j=0;j<n;j++){
            if(x[j]=='1' && s[j]=='0'){
                c++;
            }
            else if(x[j]=='0' && s[j]=='1'){
                c++;
            }
            else{
                if(c>=1){
                    count++;
                    c=0;
                }
            }
        }
        if(count<=1){
            ans=true;
            cout<<"YES\n";

        }
        else{
            cout<<"NO\n";
        }



    }
    return 0;
}