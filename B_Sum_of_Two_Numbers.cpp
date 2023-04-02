#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        stack<int> q1;
        stack<int> q2;
        bool ans=1;
        int k,a,b;
        int n;
        cin>>n;
        int save=n;
        while(save>0){
            k=save%10;
            save/=10;
            a=k/2;
            b=k-a;
            if(a==b){
                q1.push(a);
                q2.push(b);
            }
            else{
                if(ans==1){
                    q1.push(b);
                    q2.push(a);
                    ans=0;
                }
                else{
                    q1.push(a);
                    q2.push(b);
                    ans=1;
                }                

            }
        
        }
        int s=q1.size();
        int x=0;
        int z=0;
        s--;
        while(s>=0){
            x+=q1.top()*pow(10,s);
            z+=q2.top()*pow(10,s);
            s--;
            q1.pop();
            q2.pop();
        }
        cout<<x<<" "<<z;
        cout<<endl;
    }
    return 0;
}
