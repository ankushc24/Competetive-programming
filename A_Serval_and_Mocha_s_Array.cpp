#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int test;
    cin>>test;
    for(int t=0;t<test;t++){
        int n;
        cin>>n;
        ll *arr=new ll[n];
        int save;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mi=INT_MAX;
        for(int j=0;j<n;j++){
            for(int k=j+1;k<n;k++){
                save=__gcd(arr[j],arr[k]);
                mi=min(save,mi);
            }
        }
        if(mi<=2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}