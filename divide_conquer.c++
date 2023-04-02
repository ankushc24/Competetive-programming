#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        int *arr=new int[n];
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        //int count=0;
        int sum=0;
        for(int w=0; w<n; w++){
            sum+=arr[w];
        }
        if(sum%2==0){
            cout<<0<<endl;
            
        }
        else{
            int min=0;
            int m=arr[0];
            while(m%2==arr[0]%2){
                m=m/2;
                min++;
            }
            for(int j=1;j<n;j++){
                int k=arr[j];
                int op=0;
                while(k%2==arr[j]%2){
                    k=k/2;
                    op++;
                }
                if(op<min){
                    min=op;
                }
            }
            cout<<min<<endl;
        }

    }
    return 0;
}