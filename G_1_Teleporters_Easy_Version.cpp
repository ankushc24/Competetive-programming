#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,c;
        cin>>n>>c;
        int *a=new int[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        for(int j=0;j<n;j++){
            a[j]=a[j]+j+1;
        }
        int m=0;
        int count=0;
        sort(a,a+n);
        for(int j=0;j<n;j++){
            m+=a[j];
            if(m<=c){
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}