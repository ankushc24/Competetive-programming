#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long n;
        cin>>n;
        vector<long long> a(n);
        vector<long long> b(n);
        long long minia=LONG_LONG_MAX;
        long long minib=LONG_LONG_MAX;

        ll suma=0;
        ll sumb=0;

        for(long long j=0;j<n;j++){
            cin>>a[j];
            minia=min(minia,a[j]);
            suma+=a[j];
        }

        for(long long j=0;j<n;j++){
            cin>>b[j];
            minib=min(minib,b[j]);
            sumb+=b[j];
        }

        ll ans;
        ll val1=n*minib+suma;
        ll val2=n*minia+sumb;

        ans=min(val1,val2);

        cout<<ans;
        cout<<endl;


    }
    return 0;
}