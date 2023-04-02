#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    if((a+b+1)==n){
        cout<<b+1<<endl;
    }
    else if((a+b+1)<n){
        cout<<b+1<<endl;
    }
    else{
        cout<<n-a<<endl;
    }
    return 0;
}