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
       
        int x=0;
        int y=0;
        bool ans=false;
        for(int i=0;i<n;i++){
            if(str[i]=='L'){
                x--;
            }
            else if(str[i]=='R'){
                x++;
            }
            else if(str[i]=='U'){
                y++;
            }
            else{
                y--;
            }
            if(x==1 && y==1){
                cout<<"YES\n";
                ans=true;
                break;
                
            }
        }
        if(ans==false){
            cout<<"NO\n";
        }
    }
    return 0;
}