#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        string str;
        cin>>str;

        for(int i=0;i<9;i++){
            if(str[i]=='1'){
                cout<<17<<endl;
                break;
            }
            else if(str[i]=='7'){
                cout<<71<<endl;
                break;
            }

        }
    }
}