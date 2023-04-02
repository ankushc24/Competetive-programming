#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int max=str[0];
        for(int j=0;j<n;j++){
            if(int(str[j])>max){
                max=int(str[j]);
            }
        }
        cout<<max-96<<endl;


    }
    return 0;
}