#include <algorithm>
#include <iostream>
#include <string>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string str;
        cin>>str;
        string save=str;
        reverse(str.begin(),str.end());
        save=save+str;
        cout<<save<<endl;
    }
    return 0;
}