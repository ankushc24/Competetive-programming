#include <bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_map <char,int> h2;
    for(int i=0;i<n;i++){
        h2[s[i]]++;
    }
    unordered_map <char,int> h1;
    h1[s[0]]=1;
    h2[s[0]]--;
    if(h2[s[0]]==0){
        h2.erase(s[0]);
    }
    int best=h1.size()+h2.size();
    for(int j=1;j<n-1;j++){
        h1[s[j]]++;
        h2[s[j]]--;
        if(h2[s[j]]==0){
            h2.erase(s[j]);
        }
    int sum=h1.size()+h2.size();
    best=max(sum,best);

    }

    cout<<best<<endl;

    }

    return 0;
}