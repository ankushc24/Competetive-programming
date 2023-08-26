#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;

        if(a>b){
            cout<<"FIRST\n";
        }
        else if(b>a){
            cout<<"SECOND\n";
        }
        else if(c%2==0){
            cout<<"SECOND\n";
        }
        else{
            cout<<"FIRST\n";
        }
    }
    return 0;
}