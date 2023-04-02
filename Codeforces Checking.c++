#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char c;
        cin>>c;
        string str="codeforces";
        //int n=str.length();
        bool ans=false;
        for(int i=0;i<10;i++){
            if(c==str[i]){
                ans=true;
                break;
            }

        }
                if(ans==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}