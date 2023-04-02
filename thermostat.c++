#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int l, r, x, a, b;
        cin>>l>>r>>x;
        cin>>a>>b;
        if(a==b){
            cout<<0<<endl;
        }
        else if(b>a){
            if((b-a)>=x){
                cout<<1<<endl;
            }
            else if((r-b)>=x){
                cout<<2<<endl;
            }
            else if((a-l)>=x){
                cout<<2<<endl;
            }
            else if(((r-a)>=x) && ((r-l)>=x) && ((b-l)>=x)){
                cout<<3<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else if(a>b){
            if((a-b)>=x){
                cout<<1<<endl;
            }
            else if((r-a)>=x){
                cout<<2<<endl;
            }
            else if((b-l)>=x){
                cout<<2<<endl;
            }
            else if(((a-l)>=x) && ((r-l)>=x) && ((r-b)>=x)){
                cout<<3<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}