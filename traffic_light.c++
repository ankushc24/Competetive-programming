#include <bits/stdc++.h>
using namespace std;

int func(string str,int n,int pos){
    int count=0;
    for(int k=pos;k<n;k=(k+1)%n){
        
        if(str[k%n]=='g'){
            return count;
        }
        else{
            count++;
        }
    }
}

int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        char c;
        cin>>n;
        cin>>c;
        string str;
        cin>>str;
        if(c=='g'){
            cout<<0<<endl;
        }
        else{
            int max=0;

            for(int j=0;j<n;j++){
                if(str[j]==c){
                    int count=func(str,n,j);
                    if(count>max){
                    max=count;
                }
                }
            }
            cout<<max<<endl;
            }
            
        }
     return 0; 
    }
   

