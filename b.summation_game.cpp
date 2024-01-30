#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k,x;
        cin>>n>>k>>x;

        vector<int> a(n);

        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        sort(a.begin(),a.end());

        int g=0;
        int count=k;
        while(g<n && count>0){
            if(a[g]<0){
                g++;
                count--;
            }
            else{
                break;
            }
        }

        int f=n-1;
        int count2=x;
        while(f>=g && f>=0 && count2>0){
            if(a[f]>0){
                a[f]=a[f]*(-1);
                count2--;
                f--;
            }
            else{
                break;
            }
        }
        int sum=0;
        if(g>=0 && g<n){
            for(int e=g;e<n;e++){
                sum+=a[e];
            }
        }


        cout<<sum<<endl;
    }
    return 0;
}