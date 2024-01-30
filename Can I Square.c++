#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<ll> a(n);
        ll sum=0;
        for(int j=0;j<n;j++){
            cin>>a[j];
            sum+=a[j];
        }

        ll root=sqrt(sum);

        if(root*root==sum){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}