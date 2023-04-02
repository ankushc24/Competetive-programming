#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string str;
        cin>>str;
        string ans;
        int total=0;
        if(str[0]=='0'){
            total=0;
        }
        else{
            total=1;
        }
        for(int j=1;j<n;j++){
            if(str[j]=='0'){
                ans+='+';
            }
            else if(str[j]=='1'){
                if(total==1){
                    total=0;
                    ans+='-';
                }
                else{
                    total=1;
                    ans+='+';
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}