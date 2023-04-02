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
    int count=0;
    for(int j=0;j<n;j++){
        int num=arr[j];
        while(num%2==0){
            num=num/2;
            count++;
        }
    }
    if(count>=n){
        cout<<0<<endl;
    }
    else{
        vector <int> ans;
        for(int j=1;j<=n;j++){
            int k=j;
            int s=0;
            while(k%2==0){
                k/=2;
                s++;
            }
            if(s>0){
                ans.push_back(s);
            }
        }
        sort(ans.begin(),ans.end());
        int si=ans.size();
        int op=0;
        for(int j=si-1;j>=0;j--){
            count+=ans[j];
            op++;
            if(count>=n){
                cout<<op<<endl;
                break;
            }
        }
        if(count<n){
            cout<<-1<<endl;
        }
      }
    }
    return 0;
}