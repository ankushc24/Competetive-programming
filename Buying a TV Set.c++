#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a,b,x,y;
    cin>>a>>b>>x>>y;

    long long g=__gcd(x,y);

    x=x/g;
    y=y/g;
    long long w=a/x;
    long long h=b/y;
    
    cout<<min(w,h)<<endl;
    return 0;
}