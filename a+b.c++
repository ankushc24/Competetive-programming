#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        string str;
        cin>>str;
        int a =int(str[0])-int('0');
        int b=int(str[2])-int('0');
        cout<<a+b<<endl;

    }

    return 0;
}