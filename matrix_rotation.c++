#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int arr[2][2];
        cin>>arr[0][0]>>arr[0][1];
        cin>>arr[1][0]>>arr[1][1];
        bool ans=false;
        for(int i=0;i<4;i++){
            if(arr[0][0]<arr[0][1] && arr[1][0]<arr[1][1] && arr[0][0]<arr[1][0] && arr[0][1]<arr[1][1]){
                ans=true;
                cout<<"yes"<<endl;
                break;
            }
            else{
                int t1=arr[0][0];
                int t2=arr[0][1];
                int t3=arr[1][0];
                int t4=arr[1][1];
                arr[0][0]=t3;
                arr[0][1]=t1;
                arr[1][0]=t4;
                arr[1][1]=t2;
            }
        }
        if(ans==false){
        cout<<"no"<<endl;
        }
    }
    return 0;
}