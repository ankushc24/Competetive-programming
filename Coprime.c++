#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        unordered_map<int,int> hash;
        for(int j=1;j<=n;j++){
            int x;
            cin>>x;
            hash[x]=j;            
        }
        int max1=-1;
        for(int j=1;j<=1000;j++){
            for(int k=j;k<=1000;k++){
                if(hash[j]>0 && hash[k]>0){
                    if(__gcd(j,k)==1)
                    max1=max(max1,hash[j]+hash[k]);
                }
            }
        }
        cout<<max1<<endl;
    }
    return 0;
}