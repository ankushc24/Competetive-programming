#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    int a[100];
    int b[100];
    int count=0;
    string str;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>str;
        cin>>a[i];
        cin>>b[i];
    }

    for(int j=0;j<n;j++){
        if(a[j]>=2400){
            if(b[j]>a[j]){
                count++;
            }
        }
    }
    if(count>0){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}