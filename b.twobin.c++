#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        string a,b;
        cin>>a>>b;
        bool f=false;

        int s=a.length();
        for(int i=0;i<s;i++){
            if(a[i]=='0' && a[i+1]=='1' && b[i]=='0' && b[i+1]=='1'){
                f=true;
                break;
            }
        }
        if(f==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}