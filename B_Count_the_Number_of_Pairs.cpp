#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        map<int,int>l;
        map<int,int>u;
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int num;
        for(int j=0;j<n;j++){
            if(isupper(s[j])==0){
                
                l[s[j]-'a']++;
            }
            else{
                u[s[j]-'A']++;
            }
        }
        int count=0;
        for(int j=0;j<26;j++){
            count+=min({l[j],u[j]});
        }
            for(int j=0;j<26;j++){
                int val=abs(u[j]-l[j])/2;
                if(val>=k){
                    count+=k;
                    k=0;
                }
                else{
                    count+=val;
                    k=k-val;
                }
                if(k==0){
                    break;
                }


            }
        cout<<count<<endl;


    }
    return 0;
}