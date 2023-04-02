#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string str;
        cin>>str;
        int s=str.length();
        bool a=false;
        if(s==1){
            if(str[0]=='Y' || str[0]=='e' || str[0]=='s'){
                cout<<"yes"<<endl;
               
            }
            else{
                cout<<"NO"<<endl;
                
            }
        }
        else{
        for(int j=0;j<s-1;j++){
            if(str[j]=='Y' && str[j+1]=='e'){
                a=true;
                continue;
            }

            
            else if(str[j]=='e' && str[j+1]=='s'){
                a=true;
                continue;
            }

            else if(str[j]=='s' && str[j+1]=='Y'){
                a=true;
                continue;
            }
            else{
                cout<<"NO"<<endl;
                a=false;
                break;
            }
    }

     if(a==true){
        cout<<"yes"<<endl;
        }
    }
    }
        
       return 0;
}



