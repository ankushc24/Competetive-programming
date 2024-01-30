#include <bits/stdc++.h>
using namespace std;

#define ll long long  
int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<ll> a(n);  
        map<ll, int> mp;   
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }

        ll count = 0;  
        ll ans = 0;    

        for (auto ele : mp) {
            ll s = ele.second;
            if (s >= 3) {
                ans += s * (s - 1) * (s - 2) / 6;
            }
            if (s >= 2) {
                ll comb = s * (s - 1) / 2;
                ans += comb * count;
            }
            count += s;
        }

        cout << ans << endl;
    }

    return 0;
}
