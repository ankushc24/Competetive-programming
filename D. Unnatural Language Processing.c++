#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        string str;
        cin>>str;

        string ans="";
        unordered_set<char> vowels;
        vowels.insert('a');
        vowels.insert('e');
        ans+=str[n-1];
        for(int j=n-2;j>=0;j--){
            ans+=str[j];

            if(vowels.find(str[j])==vowels.end()){
                if(vowels.find(str[j+1])!=vowels.end()){
                    ans+=".";
                }
            }
        }

        reverse(ans.begin(),ans.end());

        cout<<ans.substr(1,ans.length()-1)<<endl;
    }
    return 0;
}