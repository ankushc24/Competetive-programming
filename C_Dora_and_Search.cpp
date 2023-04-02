#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    for(ll i=0;i<t;i++){
        ll n;
        cin>>n;
        ll *arr=new ll[n];
        for(ll j=0;j<n;j++){
            cin>>arr[j];
        }
        ll low, high;
        ll ma,mi;
        low=0;
        high=n-1;
        bool ans=false;
        ma=n;
        mi=1;
        while((high-low)>2){

            if((arr[low]==ma ||arr[low]==mi) && (arr[high]==ma || arr[high]==mi)){
                low++;
                high--;
                mi++;
                ma--;
            }
            else if(arr[low]==ma){
                low++;
                ma--;
            }
            else if(arr[low]==mi){
                low++;
                mi++;
            }
            else if(arr[high]==ma){
                high--;
                ma--;
            }            
            else if(arr[high]==mi){
                high--;
                mi++;
            }
            else{
                ans=true;
                cout<<low+1<<" "<<high+1<<endl;
                break;
            }
        }
        if(ans==false){
            cout<<-1<<endl;
        }
    }
    return 0;
}