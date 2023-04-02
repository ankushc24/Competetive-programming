#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int m,s;
        cin>>m>>s;
        int *arr=new int[m];
        cin>>arr[0];
        int max=arr[0];
        int sum=arr[0];

        for(int j=1;j<m;j++){
            cin>>arr[j];
            sum+=arr[j];
            if(arr[j]>max){
                max=arr[j];
            }
        }
        int a=(max*(max+1))/2;
        a=a-sum;
        if(a==s){
            cout<<"yes"<<endl;
        }
        else if(a>s){
            cout<<"no"<<endl;
        }
        else{
            for(int t=max+1;t<=100000;t++){
                a+=t;
                if(a==s){
                    cout<<"yes"<<endl;
                    break;
                }
                else if(a>s){
                    cout<<"no"<<endl;
                    break;

                }
            }
        }


    }
    return 0;
}