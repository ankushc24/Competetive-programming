#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        vector <pair<ll,ll>> input,ans;
        int n;
        int element;
        cin>>n;
        for(int j=1;j<=n;j++){
            
            cin>>element;
            input.push_back({element,j});
        }
        sort(input.begin(),input.end());
        for(int k=1;k<n;k++){
            if(input[k].first%input[k-1].first!=0){
                int x=((input[k].first/input[k-1].first)+1)*input[k-1].first-input[k].first;
                ans.push_back({input[k].second,x});
                input[k].first+=x;
            }
        }
        int s=ans.size();
        cout<<s<<endl;
        for(int t=0;t<s;t++){
            cout<<ans[t].first<<" "<<ans[t].second<<endl;
        }

    }
    return 0;
}