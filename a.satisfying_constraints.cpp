#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

#define ll long long

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        unordered_set<ll> st;  // Change the type of the unordered_set to ll
        ll lower_bound_type1 = 1;
        ll upper_bound_type2 = 1e9;

        for (ll i = 0; i < n; ++i) {
            ll a, x;
            cin >> a >> x;

            if (a == 1) {
                lower_bound_type1 = max(lower_bound_type1, x);
            } else if (a == 2) {
                upper_bound_type2 = min(upper_bound_type2, x);
            } else if (a == 3) {
                st.insert(x);
            }
        }

        // Handle the case when a=3 (k must be not equal to x)
        ll a3_exclude = 0;
        for (auto ele : st) {
            if (ele >= lower_bound_type1 && ele <= upper_bound_type2) {
                a3_exclude++;
            }
        }

        // Count the valid values for k within the intersection of ranges, excluding a=3 case
        ll valid_count = max(0LL, upper_bound_type2 - lower_bound_type1 + 1 - a3_exclude);

        cout << valid_count << endl;
    }

    return 0;
}
