#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int j=0;j<test;j++){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                if(i%2==0){
                    cout<<2<<" ";
                }
                else{
                    cout<<-2<<" ";
                }
            }
            cout<<endl;
        }
        else if(n%2!=0){
            if(n==3){
                cout<<"NO\n";
            }
            else{
                int a=-((n-2)/2);
                int b=(n-1)/2;
                cout<<"YES\n";
                for(int i=0;i<n;i++){
                    if(i%2==0){
                        cout<<a<<" ";
                    }
                    else{
                        cout<<b<<" ";
                    }
                }
                cout<<endl;
            }
        }
    }
    return 0;
}