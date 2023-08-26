#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        vector<vector<char>>v(n,vector<char>(m,0));
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>v[j][k];
            }
        }
        string str="vika";
        bool found=false;
       int q=0;
       for(int j=0;j<m;j++){
            for(int k=0;k<n;k++){
                if(v[k][j]==str[q]){
                    q++;
                    break;
                }
            }
            if(q==str.length()){
                found=true;
                break;     
            }
       }
       if(found==true){
        cout<<"yes\n";
       }
       else{
        cout<<"no\n";
       }
    }
    return 0;

}