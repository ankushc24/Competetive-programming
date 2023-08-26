#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        int n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        if(k%2==0){
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else{
            string o="",e="";

            for(int i=0;i<n;i++){
                if(i%2==0) e+=s[i];
                else o+=s[i];
            }

            sort(e.begin(),e.end());
            sort(o.begin(),o.end());

            int f=0,k=0;

            while(f<e.size() && k<o.size()){
                cout<<e[f];
                f++;

                cout<<o[k];
                k++;
            }
            while(f<e.size()){
                cout<<e[f];
                f++;
            }
            cout<<endl;
        }
    }
    return 0;
}