#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n,d;
        cin>>n>>d;
        string str;
        cin>>str;
        char x;
        int y;
        char z;
        for(int j=0;j<=n;j++){
            x=str[j];
            y=(int)x-48;
            if(d>y){
                for(int k=n;k>=j;k--){
                    str[k+1]=str[k];
                }
                d=d+48;
                str[j]=(char)d;
                break;
            }
            else if(j==n-1){
                d=d+48;
                str[n]=(char)d;
                str[n+1]='\0';
            }
        }
        cout<<str<<endl;
        
    }
    return 0;
}