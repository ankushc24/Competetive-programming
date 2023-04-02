#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v;
    int x=a*b*c;
    int y=a+b+c;
    int q=a+b*c;
    int w=a*b+c;
    int e=a*(b+c);
    int r=(a+b)*c;
    v.push_back(x);
    v.push_back(y);
    v.push_back(q);
    v.push_back(w);
    v.push_back(e);
    v.push_back(r);
    sort(v.begin(),v.end());
    cout<<v[5]<<endl;

    return 0;
}