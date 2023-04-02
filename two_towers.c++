#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        cin>>n>>m;
        string s;
        string r;
        bool a1=true;
        bool a2=true;
        cin>>s;
        cin>>r;
        for(int j=0;j<n-1;j++){
            if(s[j]==s[j+1]){
                a1=false;
                break;
            }
        }
        for(int j=0;j<m-1;j++){
            if(r[j]==r[j+1]){
                a2=false;
                break;
            }
        }
        if(a1==true && a2==true){
            cout<<"YES\n";
        }
        else{
            string s1=s.substr(1,n-1);
            s=s[0];
            reverse(s1.begin(),s1.end());
            r+=s1;
            int x=m+(n-1);
            string temp;
            for(int k=0;k<x-1;k++){
                if(r[k]==r[k+1]){
                    temp=r.substr(k+1,x-(k+1));
                    r=r.substr(0,k);
                    reverse(temp.begin(),temp.end());
                    s+=temp;
                    break;
                }
            }
            bool p=true;
            bool q=true;
            int e=s.length();
            int h=r.length();
            for(int k=0;k<e-1;k++){
                if(s[k]==s[k+1]){
                    p=false;
                    break;
                }
            }
            for(int k=0;k<h-1;k++){
                if(r[k]==r[k+1]){
                    q=false;
                    break;
                }
            }
            if(p==true && q==true){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }

        }

        
    }
    return 0;

}