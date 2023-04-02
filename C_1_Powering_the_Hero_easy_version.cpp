#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll *a=new ll[n];
        priority_queue<ll> pq;
        for(ll j=0;j<n;j++){
            cin>>a[j];
        }
        ll total=0;
        for(int j=0;j<n;j++){
            if(a[j]==0){
                if(!pq.empty()){
                total+=pq.top();
                pq.pop();
                }
            }
            else{
                pq.push(a[j]);
            }
            
        }
        cout<<total<<endl;

}
        
    
    return 0;
}