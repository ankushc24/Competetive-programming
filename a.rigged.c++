#include <bits/stdc++.h>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> s(n);
        vector<int> e(n);

        for(int i=0;i<n;i++){
            cin>>s[i];
            cin>>e[i];
        }

        int ans=s[0];
        bool flag=true;
        for(int i=1;i<n;i++){
            if(s[i]>=ans && e[i]>=e[0]){
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }

    }
    return 0;
}