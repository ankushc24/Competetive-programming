#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        string a="314159265358979323846264338327";
        string str;
        cin>>str;
        int l=str.length();
        int count=0;
        for(int j=0;j<l;j++){
            if(str[j]==a[j]){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}