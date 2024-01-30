#include <bits/stdc++.h>
using namespace std;

bool is_prime(int num){
    if(num==2){
        return true;
    }

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            return true;
        }
    }
    return false;
}
int main(){
    int t;
    cin>>t;

    for(int i=0;i<t;i++){
        int n;
        cin>>n;

        string s2="Ashishgup";
        string s1="FastestFinger";

        if(n%2==1){
            cout<<s1<<endl;
        }
        else if(n==2){
            cout<<s2<<endl;
        }
        else if(n&(n-1)==0){
            cout<<s2<<endl;
        }
        else if(n%4==0){
            cout<<s2<<endl;
        }
        else if(is_prime(n/2)==false){
            cout<<s1<<endl;
        }
        else{
            cout<<s2<<endl;
        }

    }
}