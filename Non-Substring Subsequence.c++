#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,q;
        cin>>n>>q;
        string str;
        cin>>str;
        for(int j=0;j<q;j++){
            int l,r;
            cin>>l>>r;
            string a=str.substr(l-1,r-l+1);
            int w=a.length();
            bool x=false;
            bool y=false;
            for(int k=0;k<l-1;k++){
                if(str[k]==a[0]){
                    x=true;
                    break;
                }
            }
            for(int k=r;k<n;k++){
                if(str[k]==a[w-1]){
                    y=true;
                }
            }
            if(x==true || y==true){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}