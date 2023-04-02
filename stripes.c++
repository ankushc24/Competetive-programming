#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char a[8][8];
        for(int j=0;j<=7;j++){
            for(int k=0;k<=7;k++){
                cin>>a[j][k];
            }
        }
        int x=0;
        int ans=0;
        for(int j=0;j<=7;j++){
            x=0;
            for(int k=0;k<=7;k++){
                if(a[j][k]=='R'){
                    x++;
                }
            }
            if(x==8){
                ans=1;
                cout<<'R'<<endl;
                break;
            }
        }
        if(ans==0){
            cout<<'B'<<endl;
        }
    }
    return 0;
}