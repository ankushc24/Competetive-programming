#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000007;

int main() {
    int test_cases;
    cin >> test_cases;

    for(int k = 0; k < test_cases; k++) {
        int n;
        cin >> n;
        vector<int> values(n);

        for (int i = 0; i < n; i++) {
            cin >> values[i];
        }

        bool isSorted = true;

        for (int i = 0; i < n - 1; i++) {
            if (values[i] > values[i + 1] && __builtin_popcount(i + 1) != 1) {
                // Mark it as false and break from the loop
                isSorted = false;
                break;
            }
        }

        if (isSorted) {
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
