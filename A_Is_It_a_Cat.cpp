#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int j = 0; j < t; j++){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool ans = false;
        if(s[0] != 'M' && s[0] != 'm'){
            ans = false;
            cout << "NO\n";
        }
        else if(s[n-1] != 'w' && s[n-1] != 'W'){
            ans = false;
            cout << "NO\n";
        }       
        else{
            for(int i = 0; i < n - 1; i++){
                if(s[i] == 'M' || s[i] == 'm'){
                    if(s[i + 1] == 'M' || s[i + 1] == 'm' || s[i + 1] == 'e' || s[i + 1] == 'E'){
                        ans = true;
                    }
                    else{
                        ans = false;
                        break;
                    }
                }
                else if(s[i] == 'e' || s[i] == 'E'){
                    if(s[i + 1] == 'e' || s[i + 1] == 'E' || s[i + 1] == 'o' || s[i + 1] == 'O'){
                        ans = true;
                    }
                    else{
                        ans = false;
                        break;
                    }
                }
                else if(s[i] == 'o' || s[i] == 'O'){
                    if(s[i + 1] == 'o' || s[i + 1] == 'O' || s[i + 1] == 'w' || s[i + 1] == 'W'){
                        ans = true;
                    }
                    else{
                        ans = false;
                        break;
                    }
                }
                else if(s[i] == 'w' || s[i] == 'W'){
                    if(s[i + 1] == 'w' || s[i + 1] == 'W'){
                        ans = true;
                    }
                    else{
                        ans = false;
                        break;
                    }
                }
                else{
                    ans=false;
                    break;

                }
            }
            if(ans == true){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }
    return 0;
}